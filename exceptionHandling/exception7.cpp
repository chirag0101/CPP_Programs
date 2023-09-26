#include<iostream>
using namespace std;

int main(){

    int arr[5];

    cout<<"ELEs:";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }

    int find,count=0;
    cout<<"to Find:";
    cin>>find;

    for(int i=0;i<5;i++){
        if(arr[i]==find){
            cout<<"Found at:"<<i<<"\n";
            count++;
        }
    }

    if(count==0){
        try{
            throw -1;
        }catch(int){
            cout<<"Not found\n";
        }
    }

    return 0;
}