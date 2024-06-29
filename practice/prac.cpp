#include<iostream>
using namespace std;

class stud{
    // int name;
    // string namse;
    public:
    int name=10;
    int fun(int name){
        name=name;
        return name;
    }

    stud(){
        
    }

    stud(stud &obj){
        name=obj.name;
    }
};
int main(){
    stud s1;
    stud s2(s1);
    cout<<s2.name;
    return 0;
}