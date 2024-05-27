#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
};

Node* head=NULL;

Node* createNode(){
    Node* newNode=new Node();
    cout<<"Enter Data:";
    cin>>newNode->data;

    newNode->next=NULL;

    return newNode;
}

void addFirst(){
    Node* newNode=createNode();
    if(head==NULL){
        head=newNode;
        newNode->next=head;
        return;
    }else{
        Node* temp=head;
        head=newNode;
        newNode->next=temp;

        Node* temp2=temp;
        while(temp2->next!=temp){
            temp2=temp2->next;
        }
        temp2->next=head; 
        return;
    }
}

void addLast(){
    Node* newNode=createNode();
    if(head==NULL){
        addFirst();
        return;
    }else{
        Node* temp=head;
        while(temp->next!=head){
            temp=temp->next;
        }
        temp->next=newNode;
        newNode->next=head;
        return;
    }
}

void delFirst(){
    if(head==NULL){
        cout<<"LL Empty.";
    }else if(head->next==head){
        free(head);
    }else{
        Node* temp=head;
        head=temp->next;

        Node* temp2=head;
        while(temp2->next!=temp){
            temp2=temp2->next;
        }
        temp2->next=head;
        free(temp);

        return;
    }
}

void delLast(){
    if(head==NULL){
        cout<<"LL Empty.";
    }else if(head->next==head){
        delFirst();
    }else{
        Node* temp=head;
        while(temp->next->next!=head){
            temp=temp->next;
        }
        free(temp->next);
        temp->next=head;
        return;
    }
}

void reverseLL(){
    if(head==NULL){
        cout<<"LL Empty."<<endl;
        return;
    }else{
        int count=1;
        Node* nex=head;
        Node* prev=NULL;
        Node* temp=head;
        while(temp->next!=head){
            if(count==1){

                count++;
                Node* last=head;
                
                while(last->next!=head){
                    last=last->next;
                }
                
                nex=temp->next;
                temp->next=last;
                prev=temp;
            }else{
                nex=temp->next;
                temp->next=prev;
                prev=temp;
            }
                temp=nex ;
        }
        temp->next=prev;
        head=temp;
    }

}

void printLL(){
    if(head==NULL){
        cout<<"LL Empty";
        return;
    }else{
        Node* temp=head;

        cout<<"Head->";
        cout<<temp->data<<"->";
        temp=temp->next;
        while(temp!=head){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"Head"<<endl;
    }
}

int main(){
    while(1){
        int ip;
        cout<<"Enter Choice:"<<endl;
        cout<<"1. Add Node at First."<<endl;
        cout<<"2. Add Node at Last."<<endl;
        cout<<"3. Delete Node at First."<<endl;
        cout<<"4. Delete Node at Last."<<endl;
        cout<<"5. Reverse LL."<<endl;
        cout<<"8. PrintLL."<<endl;
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

            case 5:
                reverseLL();
                break;

            case 8:
                printLL();
                break;
            
            default:
                cout<<"Invalid IP"<<endl;
                break;
        }
    }
    return 0;
}