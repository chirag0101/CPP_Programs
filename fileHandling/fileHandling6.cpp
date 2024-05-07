//without using the ofstream constructor to open files , using the open() to open files

#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream obj;

    obj.open("file.txt");

    obj<<"chiragggggg";

    obj.close();

    return 0;
}