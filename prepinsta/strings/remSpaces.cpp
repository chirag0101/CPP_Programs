#include<iostream>
using namespace std;

int main(){
    string str;
    cout<<"str:";
    getline(cin,str);

    for(int i=0;i<str.length();i++){
        for(int j=0;j<str.length();j++){
            if(str[j]==' '){
                str[j]=str[j+1];
                str[j+1]=' ';
            }
        }
    }

    for(int i=0;i<str.length();i++){
        cout<<str[i];
    }
    
    return 0;
}