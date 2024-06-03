#include<iostream>
using namespace std;

int top=-1;

void pushStack(int data,int* arr,int size){
    if(top==-1){
        top++;
        arr[top]=data;
    }else if(top==(size-1)){
        cout<<"Stack is full"<<endl;
    }else{
        top++;
        arr[top]=data;
    }
}

void pop(int* arr,int size){
    if(top==-1){
        cout<<"stack underflow"<<endl;
    }else{
        arr[top--]=0;
    }
}

void display(int* arr){
   if(top==-1){
    cout<<"Stack is empty"<<endl;
   }else{
    int initPtr=top;
    for(initPtr;initPtr>=0;initPtr--){
        cout<<arr[initPtr]<<" ";
    }
    cout<<endl;
   } 
}

int main(){
    int size;
    cout<<"Enter Size of Stack:";
    cin>>size;

    int arr[size];

    int choice;

    while(1){
        cout<<"1. Push"<<endl;
        cout<<"2. Pop"<<endl;
        cout<<"3. Top"<<endl;
        cout<<"4. Display"<<endl;
        cout<<"5. End"<<endl;
        cin>>choice;

        switch(choice){
            case 1:{
                    int data;
                    cout<<"Enter data to push:";
                    cin>>data;
                    pushStack(data,arr,size);
                    break;
                }
            case 2:{
                pop(arr,size);
                break;
            }
            case 4:{
                display(arr);
                break;
            }
        }
    }
    return 0;
}