#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
};

Node *head=NULL;

Node* createNode(){
    Node* newNode=new Node();

    cout<<"Enter Data:";
    cin>>newNode->data;
    
    newNode->next=NULL;
    
    return newNode;
}

void addFirst(){
    Node *newNode=createNode();
    if(head==NULL){
        head=newNode;
    }else{
        Node* temp=head;
        head=newNode;
        head->next=temp;
    }
}

void addLast(){
    Node *newNode=createNode();
    if(head==NULL){
        head=newNode;
    }else{
        Node *temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newNode;
    }
}

void delFirst(){
    if(head==NULL){
        cout<<"LL Empty!";
    }else{
        Node* temp=head;
        head=head->next;
        free(temp);
    }
}

void delLast(){
    if(head==NULL){
        cout<<"LL empty!";
    }else if(head->next==NULL){
        delFirst();
    }else{
        Node *temp=head;
        while(temp->next->next!=NULL){
            temp=temp->next;
        }
        free(temp->next);
        temp->next=NULL;
    }
}

void printLL(){
    if(head==NULL){
        cout<<"LL empty!";
    }else{
        Node *temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"-";
            temp=temp->next;
        }
        cout<<"X";  
    }
}

int main(){
    Node *obj=new Node();
    
    while(1){
        int ip;
        cout<<"\nEnter Function:"<<endl;
        cout<<"1. Add Node at 1st Pos."<<endl;
        cout<<"2. Add Node at Last Pos."<<endl;
        cout<<"3. Del Node from 1st Pos."<<endl;
        cout<<"4. Del Node from Last Pos."<<endl;
        cout<<"10. PrintLL."<<endl;
        cout<<"11. Exit."<<endl;
        cin>>ip;

        switch(ip){
            case 1:
                addFirst();
                break;
            
            case 2:
                addLast();
                break;

            case 3:
                delFirst();
                break;
            
            case 4:
                delLast();
                break;

            case 10:
                printLL();
                break;
            
            case 11:
                exit(0);
                break;

            default:
                cout<<"Invalid IP";
                break;
        }
    }

    return 0;
}