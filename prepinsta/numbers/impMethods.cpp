#include<iostream>

int main(){

    int ip,rem,num=0;

    std::cout<<"Enter a number:";
    std::cin>>ip;

        printf("rem=ip%10 = %d \n",rem=ip%10);
        printf("rem=ip%100 = %d \n",rem=ip%100);
        printf("ip=ip/10 = %d\n ",ip=ip/10);

    return 0;
    
}

//123
//3
//23
//12