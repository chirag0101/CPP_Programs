#include<iostream>

int main(){
    
    std::cout<<"Num:";
    
    int num,sum=0,i=0;

    std::cin>>num;

    // for(int i=0;i<=num;i++){
    //     sum=sum+i;
    // }

    while(i<=num){
        sum=sum+i;
        i++;
    }

    std::cout<<"\nSum:"<<sum;

    return 0;
}