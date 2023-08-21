#include<iostream>
using namespace std;

int main(){
    string s1;

    // cout<<"s1:";
    // cin>>s1;            //this takes input uptil 1st space only
    // cout<<s1<<"\n";

    string s2;
    cout<<"s2:";
    getline(cin,s2);    //using this we can input string until enter is pressed
    cout<<s2<<"\n";

}