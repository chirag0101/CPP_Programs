#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int arr[]={50,40,30,20,10};
    
    int size=sizeof(arr)/sizeof(arr[0]);
    
    sort(begin(arr),end(arr));
    
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}