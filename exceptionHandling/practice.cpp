//class level exceotion

#include<iostream>
#include<exception>
using namespace std;

class invalidIndex : public runtime_error{
    public:
        invalidIndex(string excep): runtime_error{excep}{

        }
};

class Demo{
    int arr[5]={10,20,30,40,50};
    public:
        int operator[](int index){
            if(index<0 || index>=5)
                throw "Invalid Index in Demo";
            else
                return arr[index];
        }
};

int main(){
    Demo obj;

    try{
        cout<<obj[-3]<<endl;
    }catch(char const* str){
        invalidIndex obj(str);
        cout<<"\nInvalid Index Exception "<<obj.what()<<endl;
    }

    return 0;
}