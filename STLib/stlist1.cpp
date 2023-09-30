//list in STL is a doubly linked list

#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> l={10,20,20,30,40,40,50};
    list<int> :: iterator itr;

//printing normal list
    for(itr=l.begin();itr!=l.end();itr++){
        cout<<*itr<<" ";
    }

    cout<<"\n";

    list<int> l2(3,500);         //creating a list of size 3 having all elements as 500 passing this using the constructor
    for(itr=l2.begin();itr!=l2.end();itr++){
        cout<<*itr<<" ";
    }

//methods of list: as it is doubly LL it allows operation for front as well as back

    l.push_front(10);
    l.push_back(20);
    l.pop_front();
    l.pop_back();

    cout<<"\n";

    return 0;
}