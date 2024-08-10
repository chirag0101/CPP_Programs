#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1;
    string s2;

    getline(cin,s1);
    getline(cin,s2);

    map<char,int> mp;

    for(int i=0;i<s2.length();i++){
        mp[s2[i]]++;
    }

    for(auto &it: mp){
        cout<<it.first<<" "<<it.second<<endl;
    }
    
    cout<<endl;
    
    for(int i=0;i<s1.length();i++){
        if(mp.count(s1[i]) && mp[s1[i]]>0){
            mp[s1[i]]--;
        }
    }

    int count=0;
    for(auto &it: mp){
        count+=it.second;
    }

    cout<<count<<endl;

    return 0;
}