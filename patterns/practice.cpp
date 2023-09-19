#include<iostream>
using namespace std;

int main(){
    int row,col;
    cout<<"row:";
    cin>>row;
    cout<<"col:";
    cin>>col;

    for(int i=0;i<row/2;i++){
        for(int j=0;j<=i;j++){
            cout<<"* ";
        }
        cout<<"\n";
    }
       for(int i=0;i<row/2;i++){
        for(int j=col-2;j>=i;j--){
            cout<<"* ";
        }
        cout<<"\n";
        }
    return 0;
}

// int main(){
//     int start,end;
//     cout<<"Start:";
//     cin>>start;
//     cout<<"End:";
//     cin>>end;

//     for(int i=end;i>=start;i--){
//         if((i%3==0)&&(i%7==0)){
//             cout<<"i: "<<i<<"\n";
//         }
//     }
// }