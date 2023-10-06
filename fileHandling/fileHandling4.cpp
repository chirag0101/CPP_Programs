//reading data from file

#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream inFile("languages.txt");

    string str;

    while(inFile){
        getline(inFile,str);
        cout<<str<<"\n";
    }

    inFile.close();
    return 0;
}