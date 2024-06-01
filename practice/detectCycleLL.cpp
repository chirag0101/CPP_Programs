#include<iostream>
#include<map>

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
        return ;
    }else{
        Node* temp=head;
        head=newNode;
        newNode->next=temp;
        return ;
    }
}       

void addLast(){
    Node* newNode=createNode();
    if(head==NULL){
        head==newNode;
    }else{
        Node* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newNode;
    }
}

void delFirst(){
    if(head==NULL){
        cout<<"LL empty!";
    }else{
        Node* temp=head;
        head=temp->next;
        free(temp);
    }
}

void delLast(){
    if(head==NULL){
        cout<<"LL empty!";
    }else if(head->next==NULL){
        delFirst();
    }else{
        Node* temp=head;
        while(temp->next->next!=NULL){
            temp=temp->next;
        }
        free(temp->next);
        temp->next=NULL;
    }
}

void connLast(int pos){
    int count=0;
    if(head==NULL){
        cout<<"LL Empty!";
    }else{
        Node* temp=head;

        while(temp->next!=NULL){
            temp=temp->next;
        }

        Node* temp2=head;
        while(count!=(pos-1)){
            count++;
            temp2=temp2->next;
        }

        temp->next=temp2;
    }
}

void detectCycle(){
    bool cycle=false;

    if(head==NULL){
        cout<<"LL Empty!";
    }else{
        map<Node* ,bool> visited;
        Node* temp=head;

        while(temp!=NULL){
            if(visited[temp]==true){
                cout<<"Cycle Detected! at   "<<temp->data<<endl;
                return;
            }else{
                visited[temp]=true;
                temp=temp->next;
            }
        }
        cout<<"Cycle Not Detected!"<<endl;
        return;
    }
}

void printLL(){
    if(head==NULL){
        cout<<"LL empty!";
    }else{
        Node* temp=head;
        cout<<"X->";
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"X"<<endl;
    }
}

int main(){
    while(1){
        int choice;
        cout<<"1.Add at First."<<endl;
        cout<<"2.Add at Last."<<endl;
        cout<<"3.Del at First."<<endl;
        cout<<"4.Del at Last."<<endl;
        cout<<"5.Connect Last Node to Node at Pos."<<endl;
        cout<<"6.Detect Cycle."<<endl;
        cout<<"7.PrintLL"<<endl;
        cout<<"8.End"<<endl;
        cout<<"Choice:";
        cin>>choice;

        switch(choice){
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
                cout<<"Position:";
                cin>>pos;
                connLast(pos);
                break;
            }

            case 6:
                detectCycle();
                break;

            case 7:
                printLL();
                break;

            case 8:
                exit(0);
                break;

            default:
                cout<<"Invalid Choice!";
                break;
        }
    }
    return 0;
}