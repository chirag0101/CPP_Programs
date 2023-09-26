#include<iostream>
using namespace std;

void findEle(int arr[],int find){

    int count=0;
    
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

}

int main(){

    int arr[5];

    cout<<"ELEs:";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }

    int find;
    cout<<"to Find:";
    cin>>find;

    findEle(arr,find);

    return 0;
}