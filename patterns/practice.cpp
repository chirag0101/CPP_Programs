#include<iostream>
using namespace std;

int main(){

    int rows=4,num=1;

    for(int i=1;i<=4;i++){
        for(int j=3;j>=i;j--){
            cout<<"  ";
        }
        for(int k=1;k<=i;k++){
            cout<<num++<<" ";
        }
        cout<<"\n";
    }

    return 0;
}