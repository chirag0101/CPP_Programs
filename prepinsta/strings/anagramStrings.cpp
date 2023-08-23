#include<iostream>
using namespace std;

int main(){
    string s1,s2;
    cout<<"Str1:";
    getline(cin,s1);

    cout<<"Str2:";
    getline(cin,s2);

    for(int i=0;i<s1.length();i++){
        for(int j=i+1;j<s1.length();j++){
            if(s1[i]>s1[j]){
                char temp=s1[i];
                s1[i]=s1[j];
                s1[j]=temp;
            }
            if(s2[i]>s2[j]){
                int temp=s2[i];
                s2[i]=s2[j];
                s2[j]=temp;
            }
        }
    }

    int count;

    for(int i=0;i<s1.length();i++){
        if(s1[i]==s2[i]){
            count++;
        }
    }

    if(count==s1.length()){
        cout<<"ana";
    }else{
        cout<<"nah";
    }

    return 0;
}