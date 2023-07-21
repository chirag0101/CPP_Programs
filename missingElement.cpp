//finding single element from a given sorted range starting from 0

#include<iostream>

int main(){
    
    int limit;
    std::cout<<"Enter Size:"<<std::endl;
    std::cin>>limit;

    int arr[limit];
    
    std::cout<<"Enter Elements:"<<std::endl;
    for(int i=0;i<limit-1;i++){
        std::cin>>arr[i];
    }

    std::cout<<"Missing Element:";
    for(int i=0;i<limit;i++){
        if(arr[i]==(i+1)){
            std::cout<<i;
            break;
        }
        if(arr[i]!=i){
            std::cout<<i;
            break;
        }
    }

    std::cout<<std::endl;
    return 0;
}