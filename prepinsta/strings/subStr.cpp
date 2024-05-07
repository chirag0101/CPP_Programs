#include<iostream>
using namespace std;

int main(){
    string str="ababaabba";
    string s="aabb";

    for(int i=0;i<str.length();i++){
        int k=i;
        for(int j=0;j<s.length();j++){
            if(str[k]!=s[j])
                break;
            k++;
        }
        if(k==s.length()){
            cout<<i;
        }
    }

}