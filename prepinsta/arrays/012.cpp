#include<iostream>
using namespace std;

int main(){
    int size;
    cin>>size;
    int arr[size];

    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    int count_0,count_1,count_2;

    for(int i=0;i<size;i++){
        if(arr[i]==0){
            ++count_0;
        }
        if(arr[i]==1){
            ++count_1;
        }
        if(arr[i]==2){
            ++count_2;
        }

    }

    int i=0;
    while(count_0--){
        arr[i++]=0;
    }
    while(count_1--){
        arr[i++]=1;
    }   
    while(count_2--){
        arr[i++]=2;
    }     

    for(int i=0;i<size;i++){
        cout<<arr[i];
    }

    return 0;
}