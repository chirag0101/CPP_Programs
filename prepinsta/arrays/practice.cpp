#include<iostream>
using namespace std;

int main(){
    int size;
    cout<<"size:";
    cin>>size;

    int arr[size][size];

    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            cin>>arr[i][j];
        }
    }

    int count=0;

    for(int i=0;i<1;i++){
        for(int j=0;j<size;j++){
        count=0;
            for(int k=1;k<size;k++){
                for(int l=0;l<size;l++){
                    if(arr[i][j]==arr[k][l]){
                        count++;
                    }
                }
            }
            if(count==size-1){
                cout<<arr[i][j]<<" ";
            }
        }
    }
}