#include<iostream>
using namespace std;

void strReverse(string& s,int start,int end){
    if(start>end){
        return;
    }
    swap(s[start],s[end]);
    strReverse(s,start+1,end-1);

}

int main(){
    string s;
    cout<<"Enter:";
    getline(cin,s);

    strReverse(s,0,s.length()-1);
    cout<<s;
}