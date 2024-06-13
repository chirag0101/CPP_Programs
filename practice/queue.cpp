#include<iostream>
using namespace std;

int front=-1;
int rear=-1;

int arr[5];

void queue(int data){
    if(front==-1){
        front++;
    }
    // rear++;
    arr[++rear]=data;
}

void dequeue(){
    if(front==-1){
        cout<<"Queue Empty!"<<endl;
    }else{
        front++;
    }
}

void display(){
    if(front==-1){
        cout<<"Queue Empty!";
    }else{
        for(int i=front;i<=rear;i++){
            cout<<arr[i]<<" | ";
        }
        cout<<endl;
    }
}

int main(){
    while(1){
        cout<<"1. queue(insert)\n";
        cout<<"2. dequeue(delete)\n";
        cout<<"3. display\n";
        cout<<"4. end\n";
        int ch;
        cin>>ch;

        switch(ch){
            case 1:{
                int data;
                cout<<"Enter data to queue:";
                cin>>data;
                queue(data);
                break;
            }
            case 2:
                dequeue();
                break;
            case 3:{
                display();
                break;
            }
            case 4:
                exit(0);
                break;
        }
    }
}