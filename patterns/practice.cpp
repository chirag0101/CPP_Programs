#include<iostream>
using namespace std;

int main(){
    int col,row,num=1;

    cout<<"Col:";
    cin>>col;
    cout<<"Row:";
    cin>>row;

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<num++<<" ";
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