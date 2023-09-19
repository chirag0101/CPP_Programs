//why to use templates in classes
#include<iostream>
using namespace std;

class Emp{
    double sal;
    public:
        Emp(double sal){
            this->sal=sal;
        }

        int max(int x,int y){
            if(x>y){
                return x;
            }else{
                return y;
            }
        }

        Emp& max(Emp& x,Emp& y){
            if(x>y){
                return x;
            }else{
                return y;
            }
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
    Emp chirag(10000);
    Emp dad(5000);
    cout<<chirag.max(chirag,dad)<<"\n";
    return 0;
}