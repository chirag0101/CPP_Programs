#include<iostream>
using namespace std;

int main(){
    int arr[]={10,20,30,40,50};
    int size=sizeof(arr)/sizeof(arr[0]);
    int secondLarge=arr[0];
    int firstLarge=arr[0];

    for(int i=0;i<size;i++){
        if(arr[i]>firstLarge){
            secondLarge=firstLarge;     
            firstLarge=arr[i];          
        }else if(arr[i]>secondLarge){
            secondLarge=arr[i];
        }
    }

    cout<<secondLarge<<endl;

    return 0;
}