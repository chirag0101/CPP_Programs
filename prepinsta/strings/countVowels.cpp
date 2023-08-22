#include<iostream>
using namespace std;

int main(){
    string arr;
    getline(cin,arr);
    int count=0;
    for(int i=0;i<arr.length();i++){
        if(arr[i]=='A'||arr[i]=='a'||arr[i]=='E'||arr[i]=='e'||arr[i]=='I'||arr[i]=='i'||arr[i]=='O'||arr[i]=='o'||arr[i]=='U'||arr[i]=='u'){
            count++;
        }
    }
    cout<<count;
    return 0;
}