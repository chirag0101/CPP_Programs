#include<iostream>
using namespace std;

int main(){
    int n=3;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            std::cout<<j<<"";
        }
        for(int k=n;k>i;k--){
            std::cout<<" ";
        }
        for(int k=n;k>i;k--){
            std::cout<<" ";
        }
        int num=i;
        for(int l=1;l<=i;l++){

            std::cout<<num--<<"";
        }
        std::cout<<std::endl;
    }
    return 0;
}