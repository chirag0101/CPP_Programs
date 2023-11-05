#include<iostream>
using namespace std;

int main(){
    int size;
    cout<<"Enter Size:";
    cin>>size;
    
    int arr[size];
    int visited[size];

    cout<<"Enter Eles:";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    int sum;
    cout<<"Enter Sum:";
    cin>>sum;

    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if((arr[i]+arr[j])==sum){
                cout<<i<<" "<<j<<"\n";
            }
        }
    }

    
}