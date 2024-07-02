#include<iostream>
using namespace std;

int main(){
    int n=3;
    for(int i=0;i<n;i++){
        for(int k=n;k>i+1;k--){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        for(int l=0;l<i;l++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        for(int k=0;k<i;k++){
            cout<<" ";
        }
        for(int j=n;j>i;j--){
            cout<<"*";
        }
        for(int l=n;l>i+1;l--){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}