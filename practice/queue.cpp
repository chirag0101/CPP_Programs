#include<iostream>
using namespace std;

int front=-1;
int rear=-1;

int arr[5];

void queue(int data){
    if(front==-1){
        front++;
    }
    
    rear++;
}
int main(){
    while(1){
        cout<<"1. queue(insert)";
        cout<<"2. dequeue(delete)";
        cout<<"3. display";
        cout<<"4. end";
        int ch;
        cin>>ch;

        switch(ch){
            case 1:{
                int data;
                cout<<"Enter data to queue:";
                cin>>data;
                queue(data);
            }
        }
    }
}