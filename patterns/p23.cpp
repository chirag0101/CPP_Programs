#include<iostream>
using namespace std;

int main(){
    int rows=4,l=7;
    for(int i=1;i<=rows;i++){
        for(int j=2;j<=i;j++){
            cout<<" ";
        }
        for(int k=1;k<=l;k++){
            cout<<k;
        }
        l=l-2;
        cout<<"\n";
    }
    return 0;
}