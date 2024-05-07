/* Space patterns
                            1
                        2 3
                    4  5 6
                7  8  9 10    
*/

#include<iostream>
using namespace std;

int main(){
    int rows,num=1;
    cout<<"Enter Rows:";
    cin>>rows;

    for(int i=1;i<=rows;i++){
        
        //for space
        for(int j=rows-1;j>=i;j--){
            cout<<"  ";
        }

        //for numbers
        for(int k=1;k<=i;k++){
            cout<<num++<<" ";
        }

        cout<<"\n";
    }
    return 0;
}