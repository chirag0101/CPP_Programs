#include<iostream>
using namespace std;

int ans(int ip){
    int sum=0;
    if(ip==1){
        return 1;
    }

   return sum+ip+ans(--ip);
}

int main(){
    int ip;
    cin>>ip;

    int sum=ans(ip);
    cout<<sum<<endl;
    return 0;
}