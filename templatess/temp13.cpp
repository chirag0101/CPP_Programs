//linked list using templates

#include<iostream>
using namespace std;

template<typename T>
struct Node{
    T data;
    Node *next;
};

template<class T>
class LinkedList{
        Node<T>* head=NULL;
    public:

        Node<T>* createNode(){
            Node<T>* newNode=(Node<T>*)malloc(sizeof(Node<T>));
            newNode->next=NULL;
            return newNode;
        }

        void addLast(T data){
            Node<T>* newNode=createNode();
            newNode->data=data;
            
            if(head==NULL){
                head=newNode;
                cout<<"->"<<newNode->data;
            }else{
                Node<T>* temp=head;
                while(temp->next!=NULL){
                    temp=temp->next;
                }
                temp->next=newNode;
                cout<<"->"<<newNode->data;
            }

        }
};

int main(){
    LinkedList<int> L1;
    L1.addLast(10);
    L1.addLast(20);
    return 0;
}