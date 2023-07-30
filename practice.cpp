#include<iostream>
void foo(int *x){
    delete(x);
}
int main(){
    int *ptr=new int;
    *ptr=5;
    foo(ptr);
    std::cout<<*ptr<<std::endl;
}
// can you explain the output of the above code?