#include <iostream>
using namespace std;

int main ()
{
    /*
        ********
        ***    ***
        **       **    
        *          *
        **       **
        ***    ***
        ********
    */
    int l=2;
    for(int i=1;i<=4;i++){
        for(int j=4;j>=i;j--){
            cout<<"*";
        }
       
        for(int k=2;k<=l;k++){
            cout<<" ";
        }
        l=l+2;
       
        for(int p=4;p>=i;p--){
            cout<<"*";
        }
        
            cout<<"\n";
       
    }
   
    int a=4;
    for(int i=2;i<=4;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
       
        for(int k=a;k>=0;k--){
            cout<<" ";
        }
        a=a-2;
       
        for(int x=1;x<=i;x++){
            cout<<"*";
        }
        cout<<"\n";
    }

 return 0;
}