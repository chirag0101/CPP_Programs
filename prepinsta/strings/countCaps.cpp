#include<iostream>
using namespace std;

int main(){
    string str;
    getline(cin,str);
    int count;

    for(int i=0;i<str.length();i++){
        if(str[i]>=65 && str[i]<=90){
            count++;
        }
    }

    cout<<count<<"\n";
    
    return 0;
}