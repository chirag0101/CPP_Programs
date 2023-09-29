/*
                    1 2 3 4
                    1 2 3
                    1 2 
                    1
*/

#include<iostream>
using namespace std;

int main(){
    int rows;
    cout<<"Enter Rows:";
    cin>>rows;

    for(int i=1;i<=rows;i++){
        int num=1;

        for(int j=rows;j>=i;j--){
            cout<<num++<<" ";
        }
        
        cout<<"\n";
    }
}

