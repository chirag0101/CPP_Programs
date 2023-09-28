//iterators in cpp
#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> vObj={10,20,30,40,50};

    vector<int>::iterator itr;                  //iterator for vector

    //if we want to skip above declaration we can use 'auto' before 'itr' in the for loop at initialization

    for(itr=vObj.begin();itr!=vObj.end();itr++){
        cout<<*itr<<"\n";
    }

    return 0;
}