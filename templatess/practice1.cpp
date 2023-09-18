#include<iostream>
using namespace std;

class ll{
    private:
        int ip;
        ll *next;
    public:
        ll *head=NULL;
        int count=0;

            ll* createN(){

                ll *newNode=(ll*)malloc(sizeof(ll));
                cout<<"Enter Int:";
                cin>>newNode->ip;
                newNode->next=NULL;
                return newNode;

            }

        void addF(){
            ll* newNode=createN();
            if(head==NULL){
                head=newNode;
            }else{
                ll* temp=head;
                head=newNode;
                newNode->next=temp;
            }
            count++;
        }

        void addL(){
            ll* newNode=createN();
            if(head==NULL){
                head=newNode;
            }else{
                ll* temp=head;
                while(temp->next!=NULL){
                    temp=temp->next;
                }
                temp->next=newNode;
            }
        }

        void addP(){
            int pos;
            cout<<"\nEnter Pos:";
            cin>>pos;

            ll* newNode=createN();
            ll* temp=head;

            while(pos-2){
                temp=temp->next;
                pos--;
            }
            newNode->next=temp->next;
            temp->next=newNode;
        }

        void display(){
            ll* temp=head;
            cout<<"\n";
            cout<<"LL:head";
            while(temp->next!=NULL){
                cout<<"->"<<temp->ip;
                temp=temp->next;
            }
            cout<<"->"<<temp->ip;
            cout<<"\n";
            cout<<"\n";
        }
};

int main(){
     while(1){
            ll obj;
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
                obj.addF();
                break;

            case 2:
                obj.addL();
                break;

            case 3:
                obj.addP();
                break;

            case 4:
                exit(0);
                break;

            case 5:
                obj.display();
                break;

            default:
                cout<<"Invalid ip\n";
                break;
        }
    }
    return 0;
}