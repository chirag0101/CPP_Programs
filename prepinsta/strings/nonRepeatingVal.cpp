#include<iostream>
using namespace std;

int main(){
    string str;
    cout<<"str:";
    getline(cin,str);
    int visited[str.length()],count=1;

    for(int i=0;i<str.length();i++){
        if(visited[i]!=1){
            count=1;
            for(int j=i+1;j<str.length();j++){
                if(str[i]==str[j]){
                    visited[j]=1;
                    count++;
                }
            }
            if(count==1){
                cout<<"non-repeated:"<<str[i]<<"\n";
            }
        }
    }

    return 0;
}