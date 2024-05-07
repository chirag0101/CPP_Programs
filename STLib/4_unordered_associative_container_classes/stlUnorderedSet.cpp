//unordered sets,multisets,maps work on the concept of hashing nd stores elements based on their hash values

//has unique values but at random indexes

#include<iostream>
#include<unordered_set>
using namespace std;

int main(){
    unordered_set<int> unS={10,20,30,5,50};

    unordered_set<int> :: iterator itr;

    for(itr=unS.begin();itr!=unS.end();itr++){
        cout<<*itr<<" ";
    }

    cout<<"\n";

    unordered_multiset<string> unS2;

    unordered_multiset<string> :: hasher obj=unS2.hash_function();

    cout<<obj("A")<<"\n";

    return 0;
}