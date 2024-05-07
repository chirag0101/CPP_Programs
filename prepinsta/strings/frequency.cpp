#include<iostream>
using namespace std;

int main(){
    string str;
    getline(cin,str);

    int visited[str.length()],count=1;

    for(int i=0;i<str.length();i++){
    
        if(visited[i]!=1){
    
            count=0;
    
            for(int j=i+1;j<str.length();j++){
    
                if(str[i]==str[j]){
                    visited[j]=1;
                    count++;
                }
    
            }
    
            cout<<str[i]<<" : "<<count<<"\n";
    
        }
    }

    return 0;
}