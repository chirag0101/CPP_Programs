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
            throw;                                      //using throw in catch is called as rethrowing exception
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

    try{
        findEle(arr,find);
    }catch(int){
        cout<<"in main\n";
    }

    return 0;
}