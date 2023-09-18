#include<iostream>
#include<string.h>
using namespace std;

typedef struct Node{

    int ip;
    struct Node *right;

}n;

n *head=NULL;
int count=0;

n* createN(){

    n *newNode=(n*)malloc(sizeof(n));
    cout<<"Enter Int:";
    cin>>newNode->ip;
    newNode->right=NULL;
    return newNode;

}

void addF(){
    n* newNode=createN();
    if(head==NULL){
        head=newNode;
    }else{
        n* temp=head;
        head=newNode;
        newNode->right=temp;
    }
    count++;
}

void addL(){
    n* newNode=createN();
    if(head==NULL){
        head=newNode;
    }else{
        n* temp=head;
        while(temp->right!=NULL){
            temp=temp->right;
        }
        temp->right=newNode;
    }
}

void addP(){
    int pos;
    cout<<"\nEnter Pos:";
    cin>>pos;

    n* newNode=createN();
    n* temp=head;

    while(pos-2){
        temp=temp->right;
        pos--;
    }
    newNode->right=temp->right;
    temp->right=newNode;
}

void display(){
    n* temp=head;
    cout<<"\n";
    cout<<"LL:head";
    while(temp->right!=NULL){
        cout<<"->"<<temp->ip;
        temp=temp->right;
    }
    cout<<"->"<<temp->ip;
    cout<<"\n";
    cout<<"\n";
}

int main(){
    while(1){
        cout<<"1.Add First\n";
        cout<<"2.Add Last\n";
        cout<<"3.Add Pos\n";
        cout<<"4.Exit\n";
        cout<<"5.Display\n";
        cout<<"Enter Choice:";
        int ch;
        cin>>ch;

        switch(ch){
            case 1:
                addF();
                break;

            case 2:
                addL();
                break;

            case 3:
                addP();
                break;

            case 4:
                exit(0);
                break;

            case 5:
                display();
                break;

            default:
                cout<<"Invalid ip\n";
                break;
        }
    }
    return 0;
}