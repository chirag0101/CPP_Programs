#include<iostream>
#include<string>

using namespace std;

int main(){
    string s;                               //declaration
    
    cout<<"Enter Name:";
    getline(cin,s);                     //inputting strings with space

    string::iterator start;           //iterators/pointers
    string::iterator end;

    start=s.begin();                    //pointer to the beginning of the string
    end=s.end()-1;                    //pointer to the end of the string

    while(start<end){               //reversing a string
        swap(*start,*end);
        start++;
        end--;
    }

    for(auto val:s){                    //iterating over string
        cout<<val;
    }

    return 0;
}