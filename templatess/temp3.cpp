//normal function & template generated functions of same name are different

#include<iostream>
using namespace std;

/* 
template <typename T>
T min2(T x,T y){
    return (x<y)?x:y;
}
*/

//compiler writes it as:
template <typename T>
T min2(T x,T y);

template<>
char min2<char>(char x,char y){
    cout<<"Template"<<endl;
    return (x<y)?x:y;
}

//normal function
char min2(char x,char y){
    cout<<"Normal"<<endl;
    return (x<y)?x:y;
}

int main(){
    cout<<min2<char>('A','B')<<endl;
    
    cout<<min2('A','B')<<endl;              //priority of normal functions is more than the compiler generated template functions
    
    cout<<min2<>('A','B')<<endl;    

    return 0;
}