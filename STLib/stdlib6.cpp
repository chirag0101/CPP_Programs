#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> vObj={10,20,30,40,50};

    for(auto itr=vObj.begin();itr!=vObj.end();itr++){
        *itr=100;
    }

    for(auto itr=vObj.begin();itr!=vObj.end();itr++){
        cout<<*itr<<"\n";
    }

    return 0;
}