#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream obj("languages.txt");

    string str;
    cout<<"Enter String:";
    getline(cin,str);

    obj<<str;

    return 0;
}