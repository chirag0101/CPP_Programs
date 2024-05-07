#include<iostream>
using namespace std;

int main(){
    string str;
    cout<<"Str:";
    getline(cin,str);
    
    int i=0,j=str.length()-1;

    while(i<j){
        int temp=str[i];
        str[i]=str[j];
        str[j]=temp;
        i++;
        j--;
    }

    for(int i=0;i<str.length();i++){
        cout<<str[i];
    }

    return 0;
}