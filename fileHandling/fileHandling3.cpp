//taking input from user & puting it into the file

#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream obj("languages.txt");

    string str;
    cout<<"Enter Languages U Know:";
    getline(cin,str);

    obj<<str;

    return 0;
}