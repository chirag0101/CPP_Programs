#include<iostream>

int getSum(int n){
    if(n==0){
        return n;
    }else{
        return n+getSum(n-1);
    }
}

int main(){

    std::cout<<"Num:";
    int num;
    std::cin>>num;

    int sum=getSum(num);

    return 0;
}