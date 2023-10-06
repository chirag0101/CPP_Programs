//copying data from languages.txt to file.txt

#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream obj1("file.txt");                          //where to copy
    ifstream obj2("languages.txt");               //from where to copy              

    string str;

    while(obj2){
        getline(obj2,str);
        obj1<<str;
    }

    obj1.close();
    obj2.close();


    return 0;
}