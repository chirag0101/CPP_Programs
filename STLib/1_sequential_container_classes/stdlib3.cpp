//string vector

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<string> vobj={"chirag","soham","umesh"};
    
    for(int i=0;i<vobj.size();i++){
        cout<<vobj[i]<<" ";
    }

    return 0;
}