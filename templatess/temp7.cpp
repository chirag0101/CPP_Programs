//templates for a member functions

#include<iostream>
using namespace std;

class Demo{
    public:

        template<typename T>
        T min(T x,T y){
            return x+y;
        }

};

int main(){
 
    Demo obj;
    cout<<obj.min(10,20);
 
    return 0;
}