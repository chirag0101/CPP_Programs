#include<iostream>
using namespace std;

int main(){

    cout<<"Start Main"<<endl;

    try{

        throw 'A';           //throws error as catch contains parameter as int to overcome this problem we will need to change the parameter to 
                                //char or ... so that compiler himself detects the type of value

    }catch(int x){
        cout<<"Exception Handling"<<endl;
    }

    cout<<"End Main"<<endl;

    return 0;
}