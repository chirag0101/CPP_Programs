#include<iostream>
#include<math.h>

using namespace std;

int main(){

    int binaryNum,rem,count=0,decimal;
    cout<<"Binary:";
    cin>>binaryNum;

    int temp=binaryNum;
    
    while(temp!=0){
        rem=temp%10;
        decimal=decimal+rem*pow(2,count);
        temp=temp/10;
        count++;
    }

    cout<<"deci:"<<decimal<<endl;

    return 0;
}