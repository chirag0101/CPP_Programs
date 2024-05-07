/*
                    * * *
                    * *
                    * 
*/
#include<iostream>
using namespace std;

int main(){
    int rows,cols;
    
    cout<<"Rows:";
    cin>>rows;
    cout<<"Cols:";
    cin>>cols;

    for(int i=0;i<rows;i++){
        for(int j=cols-1;j>=i;j--){
            cout<<"* ";
        }
        cout<<"\n";
    }

    return 0;
}