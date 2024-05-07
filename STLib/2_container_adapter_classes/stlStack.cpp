#include<iostream>
#include<stack>
using namespace std;

void showStk(stack<int>& stk,int size){
    int i=0;
    while(i!=size){
        cout<<stk.top()<<" ";
        stk.pop();
        i++;
    }
}

int main(){
    stack<int> stk;
    stk.push(10);
    stk.push(20);
    stk.push(30);

    showStk(stk,stk.size());

    return 0;
}