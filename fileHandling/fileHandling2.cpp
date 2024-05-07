//ofstream-constructor

#include<iostream>
#include<fstream>
#include<ios>
using namespace std;

int main(){
    ofstream outfile("file.txt");          

    outfile<<"chirag\n";                   
    outfile<<"rupali\n";
    outfile<<"sanjay\n";
    outfile<<"suryawanshi\n";          

    outfile.close();                           

    ofstream outfile2("file.txt",ios::app);     //to append this after the last value

    outfile2<<"Salesforce\n";

    return 0;
}

 