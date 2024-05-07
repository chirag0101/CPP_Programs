#include<iostream>
using namespace std;
int main(){
    int size=4;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if((i==1||i==2)&&(j==1||j==2)){
                cout<<" ";
            }else{
                cout<<"*";
            }
        }
        cout<<"\n";
    }
}