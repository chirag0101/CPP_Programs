//template having 2 different arguments

#include<iostream>
using namespace std;

template<typename T,typename U>     //templates are given names as T(as template),U,V cz of the alphabetical order
auto min(T x,U y){

    // if(x<y){
    //     return x;
    // }else{                                           //this gives us error as inconsitent return type as there are 2 return values & compiler is unable to decide what type to return
    //     return y;                                  //to overcome this problem we use ternary operators
    // }
    
    return (x<y) ? x : y;                           //cz of this compiler now gets only one value to be returned
}

int main(){
    cout<<min(10,2.7f)<<endl;
    cout<<min('A',100)<<endl;
    return 0;
}