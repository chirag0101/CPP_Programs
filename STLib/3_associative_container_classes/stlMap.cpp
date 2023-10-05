//has key-value pair, sorts automatically based on keys

#include<iostream>
#include<map>
using namespace std;

int main(){
    map<int,string> mp;

    mp[18]="virat";
    mp[18]="dhoni";
    mp[7]="msd";
    mp[45]="rohit";

    map<int,string> :: iterator itr;

    for(itr=mp.begin();itr!=mp.end();itr++){
        cout<<itr->first<<" ";
        cout<<itr->second;
        cout<<"\n";
    }
    
    return 0;
}