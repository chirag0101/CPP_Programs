#include<iostream>
using namespace std;

int main(){
    int fact=1,num;
    
    cout<<"Num:";
    cin>>num;
    
    for(int i=1;i<=num;i++){
        fact=fact*i;
    }

    cout<<fact;
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