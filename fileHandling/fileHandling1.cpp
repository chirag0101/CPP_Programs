//ofstream-constructor

#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream outfile("file.txt");           //outfile is a constructor that takes a parameter to open a file, if not present it creates a file

    outfile<<"chirag\n";                       //this is the way to add something in the file, it appends at the end of the file
    outfile<<"rupali\n";
    outfile<<"sanjay\n";
    outfile<<"suryawanshi\n";

    outfile.close();                              //close the opening file

    return 0;
}