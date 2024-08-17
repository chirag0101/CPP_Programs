#include<bits/stdc++.h>
using namespace std;

vector<float> movingAvg(int arr[],int size,int k){
    vector<float> result;
    if(size<k || size==0){
        return result;
    }

    float wdSum=0;
    for (int i = 0; i < k; i++) {
        wdSum += arr[i];
    }

    result.push_back(wdSum / k);

    int i=0;
    int j=k;
    while(j<size){
        wdSum+=arr[j]-arr[j-k];
        cout<<double(wdSum/k)<<" ";
        result.push_back(wdSum/k);
        i++;
        j++;
    }
    cout<<endl;
    return result;
}

int main(){
    int size;
    cin>>size;

    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    int k;
    cin>>k;

    vector<float> v=movingAvg(arr,size,k);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    cout<<endl;
    
}