//ofstream-constructor

#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream c("file.txt");           //outfile is a constructor that takes a parameter to open a file, if not present it creates a file

    c<<"chirag\n";                       //this is the way to add something in the file, it appends at the end of the file
    c<<"rupali\n";
    c<<"sanjay\n";
    c<<"suryawanshi\n";

    c.close();                              //close the opening file

    return 0;
}