//methods of vector class

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<string> vobj={"chirag","soham","umesh"};
    
    cout<<vobj[2]<<"\n";                                   //umesh

    cout<<vobj.at(1)<<"\n";                             //soham
    
    cout<<vobj.front()<<"\n";                          //chirag
    
    cout<<vobj.capacity()<<"\n";                    //3

    cout<<vobj.data();                                     //holds address

    return 0;
}