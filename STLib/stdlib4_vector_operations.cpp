//methods/operations of vector class

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<string> vobj={"chirag","soham","umesh"};

    cout<<vobj[2]<<"\n";                                  //umesh

    cout<<vobj.at(1)<<"\n";                             //soham
    
    cout<<vobj.front()<<"\n";                          //chirag
    
    cout<<vobj.capacity()<<"\n";                    //3

    cout<<vobj.data();                                     //holds address of the start of the vector

    vobj.push_back("suryawanshi");                 //pushes element at the end of the vector

    vector<int> vobj2;

    vobj2.assign(5,10);                                     //assigns 10, to all 5 indexes in an vector

    vector<int> :: iterator itr;  

    vobj2.erase(vobj2.begin()+2);                   //removes elements for a given index of between a range

    for(itr=vobj2.begin();itr!=vobj2.end();itr++){
        cout<<*itr<<" ";
    }

    vector<int> vobj3;

    cout<<vobj3.empty();                                //outputs 1 if the vector is empty else output 0 if not empty

    return 0;
}