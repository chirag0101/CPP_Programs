#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int arr[]={50,40,30,20,10};
    string s="123";
    sort(s.begin(),s.end());
    cout<<s;

    do{
        cout<<s<<" ";
    }while(next_permutation(s.begin(),s.end()));
    return 0;
}