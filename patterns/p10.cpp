/*
                    a
                    b c
                    d e f
                    g h i j
                    k l m n o
*/
#include<iostream>
using namespace std;

int main(){
    int rows,cols;
    char ch='a';

    cout<<"Rows:";
    cin>>rows;
    cout<<"Cols:";
    cin>>cols;

    for(int i=0;i<rows;i++){
        for(int j=0;j<=i;j++){
            cout<<ch++<<" ";
        }
        cout<<"\n";
    }

    return 0;
}