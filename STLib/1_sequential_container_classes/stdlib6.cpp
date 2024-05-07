#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> vObj={10,20,30,40,50};

    for(auto itr=vObj.begin();itr!=vObj.end();itr++){
        *itr=100;
    }

    //to stop iterator from changing values of vector we write c before the functions

    for(auto itr2=vObj.cbegin();itr2!=vObj.cend();itr2++){
        // *itr2=200;       this throws error as iterator is const & we r trying to change values in the vector
        cout<<*itr2<<"\n";
    }

    //for reverse we use r
    for(auto itr3=vObj.rbegin();itr3!=vObj.rend();itr3++){
        cout<<*itr3<<"\n";
    }

    //for reverse we use r & c for const before r
    for(auto itr3=vObj.crbegin();itr3!=vObj.crend();itr3++){
        //*itr3=300;          throws error as it is constant
        cout<<*itr3<<"\n";
    }

    for(auto itr=vObj.begin();itr!=vObj.end();itr++){
        cout<<*itr<<"\n";
    }

    return 0;
}