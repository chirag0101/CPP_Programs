#include<iostream>
using namespace std;

int main(){

    int a=10,b=20;

    auto add=[] (int x,int y) -> int{
        return x+y;
    };

    void xyz(int a,add(10,20);){
        cout<<"hello";
    }


    return 0;
}