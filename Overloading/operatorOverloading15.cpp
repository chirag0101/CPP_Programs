//overloading subscript & paranthesis operator [] ()

#include<iostream>

class Demo{

   // int arr[]={10,20,30,40,50};               not allowed as c++ needs sizeof arr while initialization
   int arr[5]={10,20,30,40,50};
   
   public:
        void getData(){
            for(int i=0;i<(sizeof(arr)/sizeof(int));i++){
                std::cout<<arr[i]<<" ";
            }
            std::cout<<std::endl;
        }

        int& operator[](int index){ 
            return arr[index];                                    //returning reference cz arr[] goes as address
        }

        int operator()(int x,int y){
            return x+y;
        }


};

int main(){
    Demo obj;

    obj.getData();

    obj[2]=70;              //not allowed as obj isn't an array, so we overload it

    obj.getData();

    int res=obj(50,70);                 //  () overloading

    std::cout<<res<<std::endl;

    return 0;
}