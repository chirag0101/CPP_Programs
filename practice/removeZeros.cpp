#include<iostream>
using namespace std;

//within an array:

int main(){
    int arr[]={0,0,1,2,3,0,4,5};
    int size=8;

    int i=0;
    int j=0;

    while(j<size){
        if(arr[j]==0){
            j++;
        }else{
            arr[i]=arr[j];
            i++;
            j++;
        }
    }

    for(int a=i;a<size;a++){
        arr[a]=0;
    }

    for(int b=0;b<size;b++){
        cout<<arr[b]<<" ";
    }
    cout<<endl;

    return 0;
}


//using 2 arrays:

// int main(){
//     int arr[]={0,0,1,1,2};
//     int size=sizeof(arr)/sizeof(arr[0]);

//     int arr2[size]={0};

//     int i=0;
//     int j=0;

//     while(j<size){
//         if(arr[j]!=0){
//             arr2[i]=arr[j];
//             j++;
//             i++;
//         }else{
//             j++;
//         }
//     }

//     for(int a=0;a<size;a++){
//         cout<<arr2[a]<<" ";
//     }
//     return 0;
// }