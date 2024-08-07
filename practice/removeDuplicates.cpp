#include<iostream>
#include<vector>
#include<set>
using namespace std;

int main(){
    int arr[]={10,20,20,30,30,40};
    int size=sizeof(arr)/sizeof(arr[0]);

    int j=1;
    for(int i=0;i<size-1;i++){
        if(arr[i]!=arr[i+1]){
            arr[j]=arr[i+1];
            j++;
        }
    }


    // int i=0;
    // int j=0;

    // while(j<size){
    //     if(arr[j]!=arr[i]){
    //         arr[i+1]=arr[j];
    //         i++;
    //         j++;
    //     }else{
    //         j++;
    //     }
    // }

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    // cout<<i+1;
    
    return 0;
}

// int main(){
//     set<int> st;
//     int arr1[]={1,2,2,3,3,3,4,5};
//     int size=sizeof(arr1)/sizeof(arr1[0]);

//     for(int i=0;i<size;i++){
//         st.insert(arr1[i]);
//     }

//     for(auto it : st){
//         cout<<it<<" ";
//     }
//     return 0;
// }

// int main(){
//     int arr[]={1,2,2,3,3,3,4,5,5,5,6,7};
//     vector<int> arr2;

//     int size=sizeof(arr)/sizeof(arr[0]);

//     int element=arr[0];
//     arr2.push_back(element);

//     for(int i=1;i<size;i++){
//         if(arr[i]!=element){
//             element=arr[i];
//             arr2.push_back(element);
//         }else{
//             arr[i]=-1;
//         }
//     }

//     int count=0;
//     for(int i=0;i<size;i++){
//         if(arr[i]>=0){
//             count++;
//         }
//     }

//     cout<<count<<" ";

//     return 0;
// }