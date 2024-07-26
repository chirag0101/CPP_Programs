#include<iostream>
#include<map>
using namespace std;

map<int,int> findLarge(int *arr,int size){
    map<int,int> mp;

    int largeEle=0;
    int largeIndex=0;
    for(int i=0;i<size;i++){
        if(arr[i]>largeEle){
            largeEle=arr[i];
            largeIndex=i;
        }
    }
    mp.insert({largeEle,largeIndex});
    return mp;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    map<int,int> m=findLarge(arr,n);

    for(const auto mp : m){
        cout<<mp.first<<" "<<mp.second;
    }
    return 0;
}