//double ended queue same methods as list, allows operations on front as well as end

#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int> obj={10,20,30,40,50};

    obj.emplace_front(10);                      //used for adding element at front
    obj.pop_back();

    deque<int> :: iterator itr;

    for(itr=obj.begin();itr!=obj.end();itr++){
        cout<<*itr<<" ";
    }

    return 0;
}