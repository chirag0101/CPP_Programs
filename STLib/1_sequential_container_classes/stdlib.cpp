#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v={20};                         //sizeof vector is always 24 bytes as it contains 3 pointers in it as arguments begin,end,memory storage
    cout<<sizeof(v)<<"\n";

    v.push_back(10);
    cout<<size(v)<<"\n";
 
    v.pop_back();
    cout<<size(v);
 
    return 0;
}