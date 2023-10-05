//FIFO methodology

#include<iostream>
#include<queue>
using namespace std;

void showQ(queue<int>& obj,int size){
    
    int i=0;
    
    while(i!=size){
        cout<<obj.(front()++)<<" ";
        i++;
    }

}

int main(){
    queue<int> q;
    priority_queue<int> pq;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    showQ(q,q.size());

    return 0;
}