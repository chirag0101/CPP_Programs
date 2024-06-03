#include<iostream>
using namespace std;

int main(){
    int size;
    cout<<"Enter Size:";
    cin>>size;

    int arr[size];

    cout<<"Enter Elements:";

    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    int squareSum;

    for(int i=0;i<size;i++){
        squareSum=squareSum+(arr[i]*arr[i]);
    }

    cout<<squareSum<<endl;

    return 0;
}