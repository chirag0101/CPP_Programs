#include<iostream>
using namespace std;

int main(){
    int size,k,minCount,maxCount;
    cout<<"size:";
    cin>>size;
    
    int size1=size,size2=size,arr[size];
    
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    cout<<"k:";
    cin>>k;
    //10 20 30 40 50
    for(int i=0;i<size;i++){
        minCount=0;
        for(int j=i+1;j<size1;j++){
            if(arr[i]<arr[j]){
                minCount++;
                if(minCount==k){
                        cout<<arr[j]<<"\n";
                        size1--;
                }            
            }
        }
    }

    return 0;
}