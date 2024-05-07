/*
                    a B c
                    d E f
                    g H i
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

        for(int j=0;j<cols;j++){
        
            if(j%2!=0){
                cout<<(char)(ch-32)<<" ";
            }else{
                cout<<ch<<" ";
            }
        
            ch++;
        
        }
        cout<<"\n";
    }

    return 0;
}