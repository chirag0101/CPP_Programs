#include<iostream>
using namespace std;

int trapWater(int arr[],int n){
    int left[n];
    int right[n];

   int maxLeft=arr[0]; 
    for(int i=0;i<n;i++){
        if(arr[i]>maxLeft){
            left[maxLeft]=arr[i];
            maxLeft=arr[i];    
        }else{
            left[i]=maxLeft;
        }
    }

    right[n-1]=arr[n-1];
    int maxRight=arr[n-1];
    for(int i=n-1;i>=0;i--){
        if(arr[i]>maxRight){
            right[i]=arr[i];
            maxRight=arr[i];
        }else{
            right[i]=maxRight;
        }
    }

    int sum=0;

    for(int i=0;i<n;i++){
        sum=sum+min(left[i],right[i])-arr[i];
    }

    return sum;

}

int main(){
//3,1,2,4,0,1,3,2
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<trapWater(arr,n)<<endl;
    return 0;
}