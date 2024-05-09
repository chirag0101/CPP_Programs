#include<iostream>
using namespace std;

int calcSum(int *arr,int size,int sum){
    if(size==1){
        sum=sum+arr[0];
        return sum;
    }

    sum=calcSum(arr+1,size-1,sum)+arr[0];
    return sum;

}

int main(){

    int arr[]={10,20,30,40,50};
    int size=(sizeof(arr))/(sizeof(arr[0]));
    
    int sum=0;
    
    int calc=calcSum(arr,size,sum);
    
    cout<<calc<<endl;
    
    return 0;
}