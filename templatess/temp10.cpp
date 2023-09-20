//OR for temp9
#include<iostream>
using namespace  std;

class Emp{
    double sal;
    public:
        Emp(double sal){
            this->sal=sal;
        }

        int getSal(){
            return this->sal;
        }

        template<typename T>
        T max(T x,T y){
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


    Emp obj=chirag.max(chirag,dad);
    cout<<obj.getSal()<<"\n";

    cout<<chirag.max(x,y)<<"\n";

    return 0;
}