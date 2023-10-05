//FIFO methodology

//priority_queue arranges elements based on the priority of elements

#include<iostream>
#include<queue>
using namespace std;

void showQ(queue<int>& obj,int size){
    
    int i=0;
    
    while(i!=size){
        cout<<obj.front()<<" ";
        obj.pop();
        i++;
    }
    cout<<"\n";

}

void showPQ(priority_queue<int>& obj,int size){
    
    int i=0;
    
    while(i!=size){
        cout<<obj.top()<<" ";
        obj.pop();
        i++;
    }

}

int main(){
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    showQ(q,q.size());

    priority_queue<int> pq;

    pq.push(10);
    pq.push(20);
    pq.push(30);
    pq.push(40);
    pq.push(50);

    showPQ(pq,pq.size());

    return 0;
}