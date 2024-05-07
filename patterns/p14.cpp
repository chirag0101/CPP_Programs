/*
                            1 2 3 4 5
                            2 3 4 5
                            3 4 5
                            4 5
                            5
*/

#include<iostream>
using namespace std;

int main(){

int num=0;
int rows=5;

    for(int i=1;i<=rows;i++){
        num++;
        int temp=num;
        for(int j=rows;j>=i;j--){
            cout<<temp++<<" ";
        }
        cout<<"\n";
    }

    return 0;
}