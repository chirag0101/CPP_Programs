//class level exceotion

#include<iostream>
using namespace std;

class invalidIndex{
    string excep;
    public:
        invalidIndex(string excep){
            this->excep=excep;
        }

        invalidIndex(const invalidIndex& ref){
            cout<<"Copy Constructor";
        }

        string getException(){
            return excep;
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
        cout<<"\nInvalid Index Exception"<<endl;
    }

    return 0;
}