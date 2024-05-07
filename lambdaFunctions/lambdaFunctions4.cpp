#include<iostream>
using namespace std;

int main(){

    int a=10,b=20;

    auto add = [=] (int x,int y) -> int{
        cout<<a<<" "<<b<<"\n";
        return x+y;
    };

    /*the above code goes as:
            
            class Demo{
                int a,b;
                Demo(int a,int b){
                    this->a=a;
                    this->b=b;
                }

                int operator(int x,int y){
                    cout<<a<<" "<<b<<"\n";
                    return x+y;
                }
            };

    */

    return 0;
}