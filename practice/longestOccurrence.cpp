#include<iostream>
#include<bits/stdc++.h>
using namespace std;

pair<char,int> largeOcc(char arr[],int n){
    map<char,int> mp;

    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }

    int maxVal=0;
    char maxKey;
    
    for(const auto m:mp){
        if(maxVal<m.second){
            maxVal=m.second;
            maxKey=m.first;
        }
    }
    
    pair<char,int> p;
    p.first=maxKey;
    p.second=maxVal;
    return p;
}

int main(){

    int n;
    cin>>n;

    char arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    pair<char,int> p=largeOcc(arr,n);
    cout<<p.first<<":"<<p.second<<endl;
    return 0;
}