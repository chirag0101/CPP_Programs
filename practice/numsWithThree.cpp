#include<iostream>
using namespace std;

int countWithoutThree(int n){
    int count=0;
    for(int i=1;i<=n;i++){
        if((i%10)==3 || (i/10)==3){
            cout<<i<<" ";
        }else{
            count++;
        }
    }
    cout<<endl;

    return count;
}

int main(){
    int n;
    cin>>n;
    cout<<countWithoutThree(n);
    return 0;
}