#include<iostream>
using namespace std;

class Node{
    public:
    Node* prev;
    int data;
    Node* next;
};

Node* head=NULL;

Node* createNode(){
    Node* newNode=new Node();
    
    newNode->prev=NULL;
    cout<<"Enter Data:";
    cin>>newNode->data;
    newNode->next=NULL;

    return newNode;
}

void addFirst(){
    Node* newNode=createNode();
    if(head==NULL){
        head=newNode;
        newNode->prev=NULL;
        newNode->next=NULL;
    }else{
        Node* temp=head;
        newNode->next=temp;
        temp->prev=newNode;
        head=newNode;
    }
}

void addAtPos(int pos){
    Node* newNode=createNode();
    if(head==NULL){
        addFirst();
    }else{
        Node* temp=head;
        int count=1;
        while(count!=(pos-1)){
            count++;
            temp=temp->next;
        }
        newNode->next=temp->next;
        temp->next=newNode;
        newNode->prev=temp;
    }
}

void addLast(){
    Node* newNode=createNode();
    if(head==NULL){
        addFirst();
    }else{
        Node* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newNode;
        newNode->prev=temp;
    }
}

void delFirst(){
    if(head==NULL){
        cout<<"DLL Empty!";
        return;
    }else{
        Node* temp=head;
        temp->next->prev=NULL;
        head=temp->next;
        free(temp);
    }
}

void delAtPos(int pos){
    if(head==NULL){
        return;
    }else if(pos==1){
        delFirst();
    }else{
        Node* temp=head;
        int count=1;
        while(count!=(pos-1)){
            count++;
            temp=temp->next;
        }
        Node* temp2=temp->next->next;
        free(temp->next);
        temp->next=temp2;
        temp2->prev=temp;
    }
}

void delLast(){
    if(head==NULL){
        cout<<"DLL Empty!";
        return;
    }else{
        Node* temp=head;
        while(temp->next->next!=NULL){
            temp=temp->next;
        }
        Node* temp2=temp->next;
        free(temp2);
        temp->next=NULL;
    }
}

void printLL(){
    if(head==NULL){
        cout<<"LL empty!";
    }else{
        Node* temp=head;
        while(temp!=NULL){
            cout<<" <-"<<temp->data<<"-> ";
            temp=temp->next;
        }
    }
}

int main(){
  while(1){
        while(1){
        int ip;
        cout<<"\nEnter Function:"<<endl;
        cout<<"1. Add Node at 1st Pos."<<endl;
        cout<<"2. Add Node at Last Pos."<<endl;
        cout<<"3. Del Node from 1st Pos."<<endl;
        cout<<"4. Del Node from Last Pos."<<endl;
        cout<<"5. Add Node at Pos."<<endl;
        cout<<"6. Del Node at Pos."<<endl;
        cout<<"7. Reverse LL."<<endl;
        cout<<"8. PrintLL."<<endl;
        cout<<"9. Exit."<<endl;
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

            case 5:{
                int pos;
                cout<<"Enter Pos:";
                cin>>pos;
                addAtPos(pos);
                break;
            }

            case 6:{
                int pos;
                cout<<"Enter Pos:";
                cin>>pos;
                delAtPos(pos);
                break;
            }

            // case 7:
            //     reverseLL();
            //     break;

            case 8:
                printLL();
                break;
            
            case 9:
                exit(0);
                break;

            default:
                cout<<"Invalid IP";
                break;
        }
    }
  }
    return 0;
}
