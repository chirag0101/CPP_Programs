#include<iostream>
using namespace std;

class Demo{
    int arr[5]={10,20,30,40,50};
    public:
    template<typename T>
        T operator[](T i){
            return arr[i];
        }
};

int main(){
    Demo obj;
    cout<<obj[2];
    return 0;
}