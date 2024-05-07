//prime numbers in range

#include<iostream>

int main(){

    int start,end;
    std::cout<<"Enter start:";
    std::cin>>start;
    std::cout<<"Enter end:";
    std::cin>>end;

    int count=0;

    printf("Prime nos:");

    for(int i=start;i<=end;i++){

        for(int j=2;j<i/2;j++){
        
            if(i%j==0){
                count++;
            }
                
        }

        if(count==0){
            printf(" %d",i);
        }        

         count=0;
    }

    return 0;
}