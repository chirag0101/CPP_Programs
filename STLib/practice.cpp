#include<iostream>
#include<vector>
using namespace std;

// int main(){
//     int arr1[]={10,20,40};
//     int arr2[]={20,50};

//     int size1=sizeof(arr1)/sizeof(arr1[0]);
//     int size2=sizeof(arr2)/sizeof(arr2[0]);
//     int totalSize=size1+size2;

//     int arr3[totalSize];

//     int i=0,j=0,k=0;

//     while(i<size1 && j<size2){
//         if(arr1[i]<arr2[j]){
//             arr3[k++]=arr1[i++];
//         }else if(arr1[i]>arr2[j]){
//             arr3[k++]=arr2[j++];
//         }else{
//             arr3[k++]=arr1[i++];
//         }
//     }

//     while(i<size1){
//         arr3[k++]=arr1[i++];
//     }

//     while(j<size2){
//         arr3[k++]=arr2[j++];
//     }

//     for(int l=0;l<size1+size2;l++){
//         cout<<arr3[l]<<" ";
//     }    

// }

void rev(vector<int> &arr1,vector<int> &arr2,int size){
    // auto i=arr1.begin();
    // auto j=arr2.begin();

    // while(i!=arr1.end() && j!=arr2.end()){
    //     if(*i < *j){
    //         i++;
    //     }else{
    //         arr1.insert(i,*j);
    //         j++;
    //     }
    // }

    // arr1.insert(i, j, arr2.end());
    int k=0;
    for(int i=size;i<arr1.size();i++){
        cout<<i<<" "<<arr1.size();
        i++;
        break;
    }
    // int a=arr1.size();
    // cout<<a;
}

int main(){
    vector<int> v1={10,20,50};
    int size=v1.size();

    vector<int> v2={30,40};

    rev(v1,v2,size);

    // for(int i=0;i<v1.size();i++){
    //     cout<<v1[i]<<" ";
    // }

}