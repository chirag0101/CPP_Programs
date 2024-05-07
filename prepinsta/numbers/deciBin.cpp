#include<iostream>
using namespace std;

int main(){
    int num,count=0,rem=1,div=1;
    cout<<"Num:";
    cin>>num;

    int arr[4];

    div=num;

    int i=4;
    
    while(div!=0){
        arr[i]=(div%2);
        div=div/2;
        i--;
    }

    for(int i=3;i>=0;i--){
        cout<<arr[i]<<" ";
    }

    return 0;
}
