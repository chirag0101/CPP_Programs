//has key-value pair, sorts automatically based on keys, allows duplicate values

#include<iostream>
#include<map>
using namespace std;

int main(){
    multimap<int,string> mp={{1,"chirag"},{1,"chirag"}};

    multimap<int,string> :: iterator itr;

    for(itr=mp.begin();itr!=mp.end();itr++){
        cout<<itr->first<<" ";
        cout<<itr->second;
        cout<<"\n";
    }
    
    return 0;
}