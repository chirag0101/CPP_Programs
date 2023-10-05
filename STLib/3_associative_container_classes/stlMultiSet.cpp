//multi-set doesn't removes elements but orders it into a sorted manner

//there is no header file to be included for multi-set

#include<iostream>
#include<set>
using namespace std;

int main(){
    multiset<int> ms={10,20,30,10,5,20,30};
    multiset<int> :: iterator itr;

    for(itr=ms.begin();itr!=ms.end();itr++){
        cout<<*itr<<" ";
    }

    return 0;
}