#include<iostream>
#include<vector>
#include<deque>
#include<stack>
#include<list>
#include<set>
#include<unordered_set>
#include<queue>
#include<map>
using namespace std;

int main(){
    // vector<int> v;

    //deque<int> d;

    //stack<int> s;

    // priority_queue<int,vector<int>,greater<int>> pqMax;
    // pqMax.push(1);
    // pqMax.push(2);
    // pqMax.push(3);
    // pqMax.push(4);
    // pqMax.push(5);
    // int size=pqMax.size();
    // for(int i=0;i<size;i++){
    //     cout<<pqMax.top()<<" ";
    //     pqMax.pop();
    // }

    // vector<int> v={1,2,3,4};

    // for(auto itr=v.begin();itr!=v.end();itr++){
    //     cout<<*itr<<" ";
    // }

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

    // set<int> s={3,3,2,1};
    
    // for(int i:s){
    //     cout<<i<<" ";
    // }

    // vector<int> v={1,2,3,4,5};
    // v.push_back(6);
    // cout<<v.capacity()<<" ";

    // v.shrink_to_fit();
    // cout<<v.capacity();

    // unordered_set<int> us;
    // us.insert(1);
    // us.insert(2);
    // us.insert(3);

    // for(int i:us){
    //     cout<<i<<" ";
    // }

    map<char,string> m;
    m['a']="chirag";
    m['b']="soham";
    m['c']="umesh";
    for(auto i:m){
        cout<<i.first<<" ";
    }

}
