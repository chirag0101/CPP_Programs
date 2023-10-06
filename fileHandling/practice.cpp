#include<iostream>
using namespace std;

int main(){
    int rows=4,cols=4;
    cout<<"Enter Rows:";
    cin>>rows;
    cout<<"Enter Cols:";
    cin>>cols;
    int arr[rows][cols];
    cout<<"Enter Values:";
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>>arr[i][j];
        }
    }

    cout<<"Spiral Traversal:\n";
    
    int left=0,right=cols-1,top=0,bottom=rows-1;
        
        while(top<=bottom){

            for(int i=left;i<=right;i++){
                cout<<arr[top][i]<<" ";
            }
            top++;

            cout<<"\n";

            for(int j=top;j<=bottom;j++){
                cout<<arr[j][right]<<" ";
            }
            right--;

            cout<<"\n";

            for(int k=right;k>=left;k--){
                cout<<arr[bottom][k]<<" ";
            }
            bottom--;

            cout<<"\n";

            for(int l=bottom;l>=top;l--){
                cout<<arr[l][left]<<" ";
            }
            left++;

            cout<<"\n";
        }
    return 0;
}

// for(int i=0;i<4;i++){
    //     for(int j=0;j<4;j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<"\n";
    // }
