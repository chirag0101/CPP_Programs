#include<iostream>
#include<vector>
#include<deque>
#include<stack>
#include<list>
#include<queue>
using namespace std;

int main(){
    // vector<int> v;

    //deque<int> d;

    //stack<int> s;

    priority_queue<int,vector<int>,greater<int>> pqMax;
    pqMax.push(1);
    pqMax.push(2);
    pqMax.push(3);
    pqMax.push(4);
    pqMax.push(5);
    int size=pqMax.size();
    for(int i=0;i<size;i++){
        cout<<pqMax.top()<<" ";
        pqMax.pop();
    }

    // priority_queue<int> pq;
    // pq.push(1);
    // pq.push(2);
    // pq.push(3);
    // pq.push(4);
    // pq.push(5);

    // int n=pq.size();
    
    // for(int i=0;i<n;i++){
    //     cout<<pq.top()<<" ";
    //     // pq.pop();
    // }
}
