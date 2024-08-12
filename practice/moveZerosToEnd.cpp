#include<iostream>
using namespace std;
//1,1,0,,2,0
void sortArray(int arr[],int n){
    int i=0;
    int j=1;
    while(j<n){
        if(arr[j]!=0 && arr[i]==0){
            swap(arr[i],arr[j]);
            i++;
            j++;
        }else if(arr[j]==0){
            j++;
        }else{
            i++;
            j++;
        }
    }
}

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    sortArray(arr,n);
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}