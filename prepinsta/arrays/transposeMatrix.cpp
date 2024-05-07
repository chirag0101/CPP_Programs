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

   cout<<"actual matrix:\n";
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }

    for(int i=1;i<size;i++){
        for(int j=0;j<i;j++){
            if(i!=j){
                int temp=arr[i][j];
                arr[i][j]=arr[j][i];
                arr[j][i]=temp;
            }
        }
    }    

    cout<<"tMatrix:\n";
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}