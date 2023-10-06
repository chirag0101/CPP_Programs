//using fstream to perform both ofstream & istream

#include<iostream>
#include<fstream>
using namespace std;

int main(){
    fstream inout("file.txt");

    string str;

    while(inout){
        getline(inout,str);
        cout<<str<<" ";
    }

    string str2="chr";

    getline(inout,str2);

    return 0;
}