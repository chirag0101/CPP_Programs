#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
};

Node *head=NULL;

int main(){
    Node *node1=new Node();
    node1->data=10;
    node1->next=NULL;

    cout<<node1->data<<" "<<node1->next;
    return 0;
}