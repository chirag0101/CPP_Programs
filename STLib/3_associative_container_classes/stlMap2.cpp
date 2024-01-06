#include<iostream>
#include<map>
using namespace std;

int main(){
    
    map<string,string> mp={{"chirag","suryawanshi"},
                                             {"umesh","shedale"},
                                             {"umesh","chaudhari"}};     

    map<string,string> :: iterator itr;

    for(itr=mp.begin();itr!=mp.end();itr++){
        cout<<itr->first<<" ";
        cout<<itr->second<<"\n";
    } 

    return 0;
}