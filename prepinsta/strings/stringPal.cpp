#include<iostream>
using namespace std;

int main(){

    string str;
    cout<<"str:";
    getline(cin,str);

    int len=str.length(),x=0;
    char ch[len];

    for(int i=len-1;i>=0;i--){
        ch[x++]=str[i];
    }

    int count=0;

    for(int i=0;i<len;i++){
        if(ch[i]==str[i]){
            count++;
        }
    }

    if(count==len){
        cout<<"Pal\n";
    }else{
        cout<<"not\n";
    }

    return 0;
}