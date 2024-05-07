#include<iostream>
using namespace std;

int main(){

    string ogString,rpStr,rpWithStr;
    int count=0,x=0;
    
    cout<<"OgString:";
    getline(cin,ogString);

    cout<<"RpString:";
    getline(cin,rpStr);

    cout<<"RpWith:";
    getline(cin,rpWithStr);

    for(int i=0;i<ogString.length();i++){
        if(ogString[i]==rpStr[x]){
            ogString[i]=rpWithStr[x];
            x++;
        }
    }

    for(int i=0;i<ogString.length();i++){
        cout<<ogString[i];
    }

    return 0;
}