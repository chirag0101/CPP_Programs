#include<iostream>

int main(){
    
    std::cout<<"Enter Start:";
    int start;
    std::cin>>start;

    std::cout<<"\nEnter End:";
    int end;
    std::cin>>end;

    int sum;

    for(int i=start;i<=end;i++){
        sum=sum+i;
    }

    std::cout<<"\nSum:"<<sum;

    return 0;
}