/*
        4 3 2 1 
        4 3 2
        4 3 
        4
*/

#include<iostream>
using namespace std;

int main(){

int rows=4;

    for(int i=1;i<=rows;i++){
        int num=4;
        for(int j=rows;j>=i;j--){
            cout<<num--<<" ";
        }
        cout<<"\n";
    }

    return 0;
}