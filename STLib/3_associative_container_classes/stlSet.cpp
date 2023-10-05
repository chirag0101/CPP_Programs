//set is used to remove duplicate values & sort the remaining elements viceversa for multiset

#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int> s={10,20,10,5,20};
    set<int> :: iterator itr;

    for(itr=s.begin();itr!=s.end();itr++){
        cout<<*itr<<" ";                                        //op: 5 10 20 removes duplicates & sorts them
    }

    return 0;
}