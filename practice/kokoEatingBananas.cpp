#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int calcTime(vector<int> v,int i){
    int totalTime=0;
    for(int j=0;j<v.size();j++){
        totalTime=totalTime+ceil((double)v[j]/(double)i);
    }
    return totalTime;
}

int countMin(vector<int> v,int h){
    int start=1;
    int maxEle=INT_MIN;
    
    for(int i=0;i<v.size();i++){
        maxEle=max(maxEle,v[i]);
    }    

    int end=maxEle;

    while(start<=end){
        int mid=start+end/2;
        int calc=calcTime(v,mid);
        if(calc<=h){
            end=mid-1;
        }else{
            start=mid+1;
        }
    }
    return start;
}

int main(){
    int n;
    cin>>n;

    vector<int> pile(n);
    for(int i=0;i<n;i++){
        cin>>pile[i];
    }

    int h;
    cin>>h;

    cout<<countMin(pile,h)<<endl;
    return 0;
}