#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;

void readStr(string s,int start,int end){
    if(start>end){
        return;
    }
    readStr(s,start+1,end);
    cout<<s[start];
}

int main(){
    string s;
    getline(cin,s);
    readStr(s,0,s.length());
   
    return 0;
}

// string strRev(string s){
    // int size=s.length();
    // for(int i=size-1;i>=0;i--){
    //     cout<<s[i]<<" ";
    // }
    // int start=0;
    // int end=s.length()-1;
    // while(start<end){
    //    swap(s[start],s[end]);
    //    start++;
    //    end--; 
    // }
    // return s;
// }
