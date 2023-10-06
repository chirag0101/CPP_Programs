//ofstream-constructor

#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream outfile("file.txt");          

    outfile<<"chirag\n";                   
    outfile<<"rupali\n";
    outfile<<"sanjay\n";
    outfile<<"suryawanshi\n";          

    outfile.close();                           

    ofstream outfile2("file.txt",app);

    return 0;
}

 