#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> obj={10,20,30};
    vector<int> :: iterator itr;

    for(itr=obj.end()-1;itr!=obj.begin()-1;itr--){
        cout<<*itr<<" ";
    }
    return 0;
}