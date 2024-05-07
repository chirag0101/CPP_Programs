/*
                        1
                     1 2 3
                 1 2 3 4 5
               1 2 3 4 5 6 7  
*/
#include<iostream>
using namespace std;

int main(){
    int rows=4,l=1;

    for(int i=1;i<=rows;i++){

        int num=1;
        
        for(int j=rows;j>i;j--){
            cout<<"  ";
        }
        
        for(int k=1;k<=l;k++){              //formula for condition of k: 2*i-1
            cout<<num++<<" ";
        }
        
        l=l+2;
        
        cout<<"\n";
    }
    return 0;
}