#include<iostream>
using namespace std;

void gun(){
    cout<<"Start gun\n";
    throw -1;                                   //checks if exception is handled in gun(), if not then pops the function without executing further
    cout<<"End gun\n";
}

void fun(){
    cout<<"Start fun\n";    
    gun();                                        //checks if exception is handled in fun(), if not then pops the function without executing further
    cout<<"End fun\n";
}

int main(){
    cout<<"Start main\n";

    fun();                                        //as exception is still not handled in main, it pops main without executing further          

    cout<<"End main\n";

    return 0;
}