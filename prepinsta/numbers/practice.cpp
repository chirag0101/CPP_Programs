#include<iostream>
#include<math.h>

int main(){

    int num,rem=0,sum=0,count=0;

    std::cout<<"Enter Num : ";
    std::cin>>num;

    int temp;

if(num==3){

    for(int i=100;i<=999;i++){
        temp=i;
        while(temp!=0){
            rem=temp%10;

            sum=sum+pow(rem,count);

            temp=temp/10;
        }

        if(sum==i){
            printf("%d",i);
        }
    sum=0;
    }
}else if(num==1||2){

    for(int i=1;i<=99;i++){
        temp=i;
        while(temp!=0){
            rem=temp%10;

            sum=sum+pow(rem,count);

            temp=temp/10;
        }
    if(sum==i){
        printf("%d",i);
    }
    sum=0;
    }
}

    return 0;
}