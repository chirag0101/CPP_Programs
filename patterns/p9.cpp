/*
                    1
                    1 2
                    1 2 3
                    1 2 3 4
                    1 2 3 4 5
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
        int num=1;
        for(int j=0;j<=i;j++){
            cout<<num++<<" ";
        }
        cout<<"\n";
    }

    return 0;
}