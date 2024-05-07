#include<iostream>
using namespace std;

int main(){
    string s;
    cout<<"Str:";
    getline(cin,s);
    
    int len=s.length();

    for(int i=0;i<len;i++){
        if(i==0||i==len-1){
            if(s[i]>=97&&s[i]<=122){
                s[i]=s[i]-32;
            }
        }
    }

    for(int i=0;i<len;i++){
        cout<<s[i];
    }
    
    return 0;
}