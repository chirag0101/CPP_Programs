#include<iostream>
using namespace std;

class Demo{
    public:
        int arr[5]={10,20,30,40,50};

        int operator[](int index){
            return arr[index];
        }
};

int main(){

    Demo obj[5];

    cout<<obj[3]<<"\n";

    return 0;
}