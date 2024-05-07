#include<iostream>
#include<vector>
using namespace std;

void sortArr(vector<int> &arr,int size){
    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size;j++){
            if((arr[i]) > (arr[j])){
                swap(arr[i],arr[j]);
            }
        }
    }
}

int main(){
    vector<int> v={7,7,7,6,6,5,5};
    int size=v.size();
    sortArr(v,size);
    for(int i=0;i<size;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}