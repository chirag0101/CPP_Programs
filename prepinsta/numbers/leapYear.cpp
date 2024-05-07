#include<iostream>

int main(){
    int year;
    
    std::cout<<"Enter Year:";
    std::cin>>year;

    if(year%400==0){

            std::cout<<"Leap"<<std::endl;        

    }else if(year%4==0 && year%100!=0){
        
            std::cout<<"Leap"<<std::endl;
    
    }else{
        
            std::cout<<"Not Leap"<<std::endl;
    
    }

    
    return 0;
}