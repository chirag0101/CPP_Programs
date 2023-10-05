#include<iostream>
#include<map>
using namespace std;

int main(){
    map<int,string> mp;

    mp.insert(pair<int,string>{10,"messi"});
    mp.insert(pair<int,string>{7,"ronaldo"});
    mp.insert(pair<int,string>{15,"mbappe"});

    map<int,string> :: iterator itr;

    for(itr=mp.begin();itr!=mp.end();itr++){
        cout<<itr->first<<" ";
        cout<<itr->second<<"\n";
    }

    return 0;
}