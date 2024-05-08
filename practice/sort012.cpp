#include<iostream>
#include<vector>
using namespace std;

// void sortArr(vector<int> &arr,int size){
//     for(int i=0;i<size-1;i++){
//         for(int j=i+1;j<size;j++){
//             if((arr[i]) > (arr[j])){
//                 swap(arr[i],arr[j]);
//             }
//         }
//     }
// }

void sortArr(vector<int> &v, int size){
    int count0=0;
    int count1=0;
    int count2=0;

    for(int i=0;i<size;i++){
        if(v[i]==0)
            count0++;
        if(v[i]==1)
            count1++;
        if(v[i]==2)
            count2++;
    }

    int count=0;
    while(count0--)
        v[count++]=0;
    while(count1--)
        v[count++]=1;
    while(count2--)
        v[count++]=2;
}


int main(){
    vector<int> v={0,0,2,2,1,1};
    int size=v.size();
    sortArr(v,size);
    for(int i=0;i<size;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}