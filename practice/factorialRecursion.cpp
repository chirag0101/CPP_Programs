#include<iostream>
using namespace std;

int checkFact(int n){
    if(n==0){
        return 1;
    }

    return n*checkFact(n-1);

}

int main(){
    int n=1;
    int fact=checkFact(n);
    cout<<fact<<endl;
}