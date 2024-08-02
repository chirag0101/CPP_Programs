#include<iostream>
using namespace std;

int main(){
    string str;
    getline(cin,str);

    int a=0;
    int b=0;
    int maxLen=0;
    for(int i=0;i<str.length();i++){
        a=i;
        b=i;
        int len=0;
        while((a>=0 && b<str.length()) && (str[a]==str[b])){
            a--;
            b++;
        }
        len=b-a-1;
        if(len>maxLen){
            maxLen=len;
        }
    }

    cout<<maxLen<<endl;

    return 0;
}