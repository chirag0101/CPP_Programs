#include<iostream>

int main(){

    int num,rem,rev=0;

    std::cout<<"Enter Num: ";
    std::cin>>num;

    int pal=num;

    while(num!=0){
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }

    if(pal==rev){
        printf("Is palindrome\n");
    }else{
        printf("Ain't Palindrome\n");
    }

    return 0;
}