#include<iostream>
using namespace std;

int main(){
    string str;
    cout<<"Name:";
    getline(cin,str);
    cout<<str<<"\n";

    int i=0,count=0;
    
    while(str[i]!='\0'){
        if(str[i]!=32){
        count++;
        }
        i++;
    }

    cout<<count<<"\n";
}