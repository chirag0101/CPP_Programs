#include<iostream>
using namespace std;

int main(){
    string arr;
    getline(cin,arr);
    int count=0;
    for(int j=0;j<arr.length();j++){
        for(int i=0;i<arr.length();i++){
            if(arr[i]=='A'||arr[i]=='a'||arr[i]=='E'||arr[i]=='e'||arr[i]=='I'||arr[i]=='i'||arr[i]=='O'||arr[i]=='o'||arr[i]=='U'||arr[i]=='u'){
                arr[i]=arr[i+1];
            }
        }
    }
    for(int i=0;i<arr.length();i++){
        cout<<arr[i];
    }
    return 0;
}