/*
                                            1
                                      1    2   1
                                  1   2   3   2   1
                             1   2   3   4   3   2   1
*/

#include<iostream>
using namespace std;

int main(){
    int rows=4,l=1;

    for(int i=1;i<=rows;i++){
        for(int j=rows;j>i;j--){
            cout<<"  ";
        }

        int num=1;

        for(int k=1;k<=l;k++){
            if(k>=i){
                cout<<num--<<" ";
            }else{
                cout<<num++<<" ";
            }
        }

        l=l+2;
        cout<<"\n";
    }
    return 0;
}