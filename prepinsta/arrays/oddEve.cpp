#include<iostream>
using namespace std;

int main(){
    int arr[5],size=5,eveCount=0,oddCount=0;

    cout<<"Eles: ";
    
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    for(int i=0;i<size;i++){
        if(arr[i]%2==0){
            eveCount++;
        }else{
            oddCount++;
        }
    }

    cout<<"Odd: "<<oddCount;
    cout<<"\nEven: "<<eveCount;

    return 0;
}