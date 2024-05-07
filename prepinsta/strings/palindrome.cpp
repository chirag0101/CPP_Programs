#include<iostream>
using namespace std;

int main(){
    string str;
    getline(cin,str);

    for(int i=0;i<str.length();i++){
        if(str[i]>=65&&str[i]<=90){
            str[i]+=32;
        }
    }

    int start=0,end=str.length()-1,count=0;
    
    while(start<end){
        if(str[start]==str[end]){
            count++;
        }
            start++;
            end--;
    }

    if(count==(str.length()/2)){
        cout<<"pal";
    }else{
        cout<<"not pal";
    }
    
    return 0;
}