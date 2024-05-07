//damond problem:
/*
                Parent
            /            \
        Child1      Child2
            \             /
              Baccha

              Here compiler doesn't know which copy of getData to be called for ex: from child1 or child2
              So by using the virtual keyword we can remove ambiguity
*/

#include<iostream>
using namespace std;

class Parent{
    public:
        void getData(){
            cout<<"parent getData";
        }
};

class Child1:virtual public Parent{
    
};

class Child2:virtual public Parent{

};

class Baccha:public Child1,Child2{

};

int main(){
    Baccha obj;
    obj.getData();
    return 0;
}