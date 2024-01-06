#include<iostream>
#include<utility>   //includes pair

using namespace std;

int main(){
    pair<int, int> p={1,2};
    cout<<p.first;

    pair<int,pair<string,string>> p2={1,{"chirag","suryawanshi"}};

    cout<<p2.second.first<<p2.second.second;
    
    pair<int,int> p1[]={{1,2},{1,3},{1,4}};

    cout<<p1[2].second;

    return 0;
}