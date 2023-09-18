/*
                    1
                    2 2
                    3 3 3
                    4 4 4 4
                    5 5 5 5 5
*/
#include<iostream>
using namespace std;

int main(){
    int rows,cols;
    char ch='A';
    
    cout<<"Rows:";
    cin>>rows;
    cout<<"Cols:";
    cin>>cols;

    for(int i=0;i<rows;i++){

        for(int j=0;j<=i;j++){
        
            cout<<ch<<" ";
        
        }
        
        ch++;
        cout<<"\n";
    }

    return 0;
}