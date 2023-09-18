#include<iostream>
using namespace std;

int main(){
    int fact=1,num;
    
    cout<<"Num:";
    cin>>num;
    int i=1;
    while(i<=num){
        fact=fact*i;
        i++;
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