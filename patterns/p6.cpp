/*
                    1 2 3
                    4 5
                    6
*/


#include<iostream>
using namespace std;

int main(){
    int rows,cols,num=1;
    
    cout<<"Rows:";
    cin>>rows;
    cout<<"Cols:";
    cin>>cols;

    for(int i=0;i<rows;i++){
        for(int j=cols-1;j>=i;j--){
            cout<<num++<<" ";
        }
        cout<<"\n";
    }

    return 0;
}