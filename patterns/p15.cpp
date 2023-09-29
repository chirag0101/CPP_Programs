/*
                    1 1 1 1 1
                    2 2 2 2
                    3 3 3
                    4 4
                    5
*/

#include<iostream>
using namespace std;

int main(){
    int rows,num=0;
    cout<<"Rows:";
    cin>>rows;

    for(int i=1;i<=rows;i++){
        num++;
        for(int j=rows;j>=i;j--){
            cout<<num<<" ";
        }
        cout<<"\n";
    }
    return 0;
}