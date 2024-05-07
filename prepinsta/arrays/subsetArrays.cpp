#include<iostream>
using namespace std;

int main(){
    int arr1[5],arr2[3],size1=5,size2=3,count=0;
    
    cout<<"Enter elements of array 1: ";
    for(int i=0;i<size1;i++){
        cin>>arr1[i];
    }
    
    cout<<"Enter elements of array 2: ";
    for(int i=0;i<size2;i++){
        cin>>arr2[i];
    }

    for(int i=0;i<size2;i++){
        for(int j=0;j<size1;j++){
            if(arr1[j]==arr2[i]){
                count++;
            }
        }
    }
    if(count==3){
        cout<<"Subset!\n";
    }else{
        cout<<"No!\n";
    }

    return 0;
}
