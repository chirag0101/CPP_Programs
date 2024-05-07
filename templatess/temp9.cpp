//member function template for objects
#include<iostream>
using namespace  std;

class Emp{
    double sal;
    public:
        Emp(double sal){
            this->sal=sal;
        }

        template<typename T>
        T& max(T& x,T& y){
            if(x>y)
                return x;
            else
                return y;
        }

        friend bool operator>(Emp& x,Emp& y){
            return (x.sal>y.sal);
        }

        friend ostream& operator<<(ostream& cout,Emp& x){
            cout<<x.sal;
            return cout;
        }

};

int main(){
    Emp chirag(200);
    Emp dad(100);

    int x=10,y=20;

    cout<<chirag.max(chirag,dad)<<"\n";
    cout<<chirag.max(x,y)<<"\n";

    return 0;
}