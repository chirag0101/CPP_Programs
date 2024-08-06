#include<bits/stdc++.h>
#include<iostream>
using namespace std;

string manString(string str,int size){
    int countSpaces=0;
    int idx=0;
    string s="";
    for(int i=0;i<str.size();i++){
        if(str[i]==' '){
            countSpaces++;
        }
        if(countSpaces==size){
            idx=i;
            break;
        }
    }

    for(int i=0;i<idx;i++){
        s=s+str[i];
    }
    return s;
}
int main(){
    string str;
    getline(cin,str);
    int size=0;
    cin>>size;

    cout<<manString(str,size)<<endl;
    return 0;
}