#include<iostream>

int main(){

    int ip,rem,sum=0;

    std::cout<<"Enter a number:";
    std::cin>>ip;

    while(ip!=0){
        rem=ip%10;
        sum=sum+rem;
        ip=ip/10;
    }

    printf("%d\n",sum);

    return 0;
}