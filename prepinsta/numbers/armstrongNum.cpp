#include<iostream>

int main(){

    int num,rem=0,sum=0,count=0;

    std::cout<<"Enter Num : ";
    std::cin>>num;

    int temp=num;
    int temp2=num;

    while(temp2!=0){
        temp2=temp2/10;
        count++;
    }

    while(temp!=0){
        rem=temp%10;

        if(count==2){
            sum=sum+(rem*rem);
        }else if(count==3){
            sum=sum+(rem*rem*rem);
        }else if(count==4){
            sum=sum+(rem*rem*rem*rem);
        }

        temp=temp/10;
    }

    if(sum==num){
        printf("Is armstrong\n");
    }else{
        printf("Isn't armstrong\n");
    }

    return 0;
}