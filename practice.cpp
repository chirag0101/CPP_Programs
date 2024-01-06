#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    
    vector<int>::iterator itr;

    for(int i=v.begin();i!=v.end();i++){
        cout<<*itr<<"\n";
    }

}