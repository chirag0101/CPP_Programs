/*
                                1 2 3 4 
                                5 6 7 8
                                9 10 11 12
*/
#include<iostream>
using namespace std;

int main(){
    int col,row,num=1;

    cout<<"Col:";
    cin>>col;
    cout<<"Row:";
    cin>>row;

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<num++<<" ";
        }
        cout<<"\n";
    }
    return 0;
}