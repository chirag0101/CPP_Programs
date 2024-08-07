#include<iostream>
using namespace std;
int main(){
    string str;
    getline(cin,str);

    int size=0;
    int start=0;
    int end=0;
    int maxLength=0;
    int maxLengthIndex=0;

    for(int i=0;i<str.length();i++){
        if(str[i]==' '){
            end=i;
            size=end-start;
            if(size>maxLength){
                maxLength=size;
                maxLengthIndex=start;
            }
            start=i+1;
        }
    }
            // cout<<maxLengthIndex<<endl;
            // cout<<maxLength<<endl;

    for(int i=maxLengthIndex;i<maxLengthIndex+maxLength;i++){
        cout<<str[i];
    }
    cout<<endl;

    return 0;
}