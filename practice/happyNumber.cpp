//number whose sum of digits=1

#include<iostream>
#include<bits/stdc++.h>
#include<set>
using namespace std;
int main(){
    int num;
    cout<<"Num:";
    cin>>num;

    bool ans;

    set<int> s;
    while(s.find(num)==s.end()){
        int n=num;
        s.insert(num);
        int sum=0;
        while(n>0){
            int rem=n%10;
            sum=sum+(rem*rem);
            n/=10;
        }
        num=sum;
        cout<<num<<endl;
    }

    if(num==1){
        cout<<"True"<<endl;
    }else{
        cout<<"False"<<endl;
    }

    return 0;
}