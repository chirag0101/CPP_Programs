#include<iostream>
using namespace std;

int main(){
    int arr[5];
    int size=5;
    int lpal=0;

    cout<<"Ele:";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    for(int i=0;i<5;i++){
        int temp=arr[i],rem,rev=0;
        while(temp!=0){
            rem=temp%10;
            rev=rev*10+rem;
            temp=temp/10;
        }
        if(rev==arr[i]){
            if(lpal<rev){
                lpal=arr[i];
            }
        }
    }

    cout<<"lpal: "<<lpal;

    return 0;
}