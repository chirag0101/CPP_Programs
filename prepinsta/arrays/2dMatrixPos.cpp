#include<iostream>
using namespace std;

int main(){
    int size;
    cout<<"size:";
    cin>>size;

    int arr[size][size];
    
    int num,count=0,i=0,j=0;

    cout<<"Eles:";
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            cin>>arr[i][j];
        }
    }

    cout<<"num:";
    cin>>num;

    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            if(arr[i][j]==num){
                count++;
            }
        }
        if(count>0){
            cout<<"Element found at:"<<i<<" "<<j<<"\n";
        }
    }
    if(count==0){
        cout<<"Element not found!";
    }

    return 0;
}