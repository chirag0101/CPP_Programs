#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int octNum,decimalNum,rem,count=0;
    cout<<"Num:";
    cin>>octNum;

    int temp=octNum;

    while(temp!=0){
        rem=temp%10;
        decimalNum=decimalNum+rem*pow(8,count);
        temp=temp/10;
        count++;
    }

    cout<<"Deci:"<<decimalNum<<endl;

    return 0;
}