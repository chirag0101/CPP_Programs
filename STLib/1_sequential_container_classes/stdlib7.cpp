#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vobj1={10,20,30,40,50};
    vector<int> vobj2={10,20,30,40,50};
    vector<int> vobj3={10,20,30,40,50};

//normal iterator
    vector<int> :: iterator itr1;

    for(itr1=vobj1.begin();itr1!=vobj1.end();itr1++){
        cout<<*itr1<<" ";
    }

    cout<<"\n";

//const iterator
    vector<int> :: const_iterator itr2;

    for(itr2=vobj2.cbegin();itr2!=vobj2.cend();itr2++){
        cout<<*itr2<<" ";
    }

    cout<<"\n";

//reverse const iterator
    vector<int> :: const_reverse_iterator itr3;

    for(itr3=vobj3.crbegin();itr3!=vobj3.crend();itr3++){
        cout<<*itr3<<" ";
    }

    cout<<"\n";


    return 0;
}