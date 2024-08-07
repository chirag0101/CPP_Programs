#include<iostream>
#include<map>
using namespace std;

int main(){
    map<char,char> s;
    string str2;
    string str;
    getline(cin,str);

    for(int i=0;i<str.length();i++){
        if(str[i]!='\0'){
            char count='1';
            for(int j=i+1;j<str.length();j++){
                if(str[i]==str[j]){
                    count++;
                    str[j]='\0';
                }
            }
            s.insert({str[i],count});
        }
    }

    // for(auto t=s.begin();t!=s.end();t++){
    //     cout<<t->first<<":"<<t->second<<endl;
    // }
    for(auto &t:s){
        str2.push_back(t.first);
        str2.push_back(t.second);
    }

    for(auto &t:str2){
        cout<<t;
    }
    cout<<endl;
    
    return 0;
}