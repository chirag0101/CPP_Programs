#include<iostream>
using namespace std;

int main(){
    int arr[5];
    
    cout<<"Enter Array Elements:";
    
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    int count1=arr[0],count2;

    for(int i=0;i<5;i++){
        count2=count1;
        if(arr[i]>count1){
            count1=arr[i];
        }
    }

    cout<<"Second Largest:"<<count2;
    return 0;
}