#include<iostream>
using namespace std;

class Demo{
    int arr[5]={10,20,30,40,50};

    public:
        int operator[](int index){
           if(index<0||index>=5){
                throw index;
           }else{
                return arr[index];
           }
        }
};

int main(){
    Demo obj;

    try{
        cout<<obj[3]<<"\n";
    }catch(int i){
        cout<<"Exception at:"<<i;
    }

    return 0;
}