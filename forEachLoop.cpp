#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> l={10,20,30};

    for(int& data : l){
        cout<<data<<" ";
    }
    
    return 0;
}