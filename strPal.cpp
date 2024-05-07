#include<iostream>
using namespace std;

string isPal(string s){
    for(int i=0;i<s.length()/2;i++){
        if(s[i]!=s[s.length()-i-1]){
            return "n\n";
        }
    }
    return "y\n";
}

int main(){
    string str="ChC";
    cout<<isPal(str);
}