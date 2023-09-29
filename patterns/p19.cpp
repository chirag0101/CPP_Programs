/*
                                             1
                                        1  2
                                   1  2  3
                              1  2  3  4
                        1  2  3  4   5       

*/

#include<iostream>
using namespace std;

int main(){
    int rows=5;

    for(int i=1;i<=rows;i++){
        for(int k=rows-1;k>=i;k--){
            cout<<"  ";
        }

        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }

        cout<<"\n";
    }

    return 0;
}