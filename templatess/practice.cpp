#include<iostream>
using namespace std;

template<typename T>
T min2(T x,T y){
    return (x<y)?x:y;
}

int main(){
    cout<<min2('A',10)<<endl;   
    return 0;
}