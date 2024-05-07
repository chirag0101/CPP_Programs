//LinkedList using classes
#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;

        Node(){
            data=0;
            next=NULL;
        }

        Node(int data){
            this->data=data;
            this->next=NULL;
        }
};

class Linked{
    private:
        Node *head;

    public:
        Linked(){
            head=NULL;
        }

        void addF(int d){
            Node* newNode=new Node(d);
            if(head==NULL){
                head=newNode;
            }else{
                Node* temp=head;
                while(temp->next!=NULL){
                    temp=temp->next;
                }
                temp->next=newNode;
            }
        }

        void delL(){
            if(head==NULL){
                return;
            }else{
                Node* temp=head;
                while(temp->next->next!=NULL){
                    temp=temp->next;
                }
                free(temp->next);
                temp->next=NULL;
            }
        }
        
        void display(){
            Node* temp=head;
            cout<<"\n";
            cout<<"LL:head";
            while(temp->next!=NULL){
                cout<<"->"<<temp->data;
                temp=temp->next;
            }
            cout<<"->"<<temp->data;
            cout<<"\n";
            cout<<"\n";
        }

};

int main(){
    Linked list;
    while(1){
        cout<<"1.Add Node\n";
        cout<<"2.Del Node\n";
        cout<<"3.Display\n";
        cout<<"4.Exit\n";
        cout<<"Enter Choice:";
        int ch;
        cin>>ch;

        switch(ch){
            case 1:
            {
                int data;
                cout<<"Enter Data:";
                cin>>data;
                list.addF(data);
                break;
            }
            case 2:
                list.delL();
                break;

            case 3:
                list.display();
                break;

            case 4:
                exit(0);
                break;

            default:
                cout<<"Invalid ip\n";
                break;
        }
    }
    return 0;
}