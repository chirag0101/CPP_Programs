#include<iostream>
using namespace std;

int main(){
    char c;
    cin>>c;
    int chr=c;
    if(chr>=65&&chr<=90||chr>=97&&chr<=122){
        cout<<"Alphabet\n";
    }else{
        cout<<"Not alphabet\n";
    }
    return 0;
}