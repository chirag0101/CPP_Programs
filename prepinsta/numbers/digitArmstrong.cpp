#include<iostream>
#include<math.h>

int main(){

    int num,rem=0,sum=0;

    std::cout<<"Enter Digit : ";
    std::cin>>num;

    int temp;

if(num==3){

    for(int i=100;i<=999;i++){
        temp=i;
        while(temp!=0){
            rem=temp%10;

            sum=sum+rem*rem*rem;

            temp=temp/10;
        }

        if(sum==i){
            std::cout<<i<<" ";
        }
    sum=0;
    }

}else if(num==2){

    std::cout<<"There's no 2 digit armstrong number!\n";

}else{

    for(int i=1;i<=9;i++){
        temp=i;
        while(temp!=0){
            rem=temp%10;

            sum=sum+rem;

            temp=temp/10;
        }
        if(sum==i){
            printf("%d ",i);
        }
        sum=0;
    }

}

    return 0;
}