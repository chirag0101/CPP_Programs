/*
                1 2 3
                2 3 4
                3 4 5
*/

#include<iostream>
using namespace std;

int main(){
    int rows,cols;

    cout<<"Rows:";
    cin>>rows;
    cout<<"Cols:";
    cin>>cols;

    for(int i=1;i<=rows;i++){
       
        int num=i;

        for(int j=1;j<=cols;j++){
            cout<<num++<<" ";
        }
        
        cout<<"\n";
    }

    return 0;
}