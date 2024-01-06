//it is a singly linked list in STL

#include<iostream>
#include<forward_list>
using namespace std;

int main(){
    
    forward_list<int> fw={10,20,30,40,50};
    forward_list<int> :: iterator itr;

    fw.insert_after(fw.before_begin(),5);                       //insert_after is similar to insert at position in singly linked list, before_begin() return data/position before the 1st element

    for(itr=fw.begin();itr!=fw.end();itr++){
        cout<<*itr<<" ";
    }

    return 0;
}
