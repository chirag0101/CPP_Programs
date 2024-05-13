#include<iostream>
using namespace std;
bool checkPal(string s,int start,int end){
    if(start>end){
        return true;
    }

    if(s[start]!=s[end]){
        return false;
    }

    checkPal(s,start+1,end-1);

    return true;
}

int main(){
    string s;
    cout<<"Enter:";
    getline(cin,s);

    bool isPal=checkPal(s,0,s.length()-1);

    if(isPal){
        cout<<"Is Pal"<<endl;
    }else{
        cout<<"Not Pal"<<endl;
    }

    return 0;
}