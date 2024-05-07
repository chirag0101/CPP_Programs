/*
                                        1 2 3 4
                                           1 2 3
                                              1 2
                                                 1
*/

#include<iostream>
using namespace std;

int main(){
    int rows=4;

    for(int i=1;i<=rows;i++){
        int num=1;
        for(int k=1;k<i;k++){
            cout<<"  ";
        }
        for(int j=rows;j>=i;j--){
            cout<<num++<<" ";
        }
        cout<<"\n";
    }

}