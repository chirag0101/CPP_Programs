//count occurences of a number using map pair and for loop
#include<iostream>
#include<map>
using namespace std;

map<int,int> count(int *arr,int size){
    map<int,int> mp;
    for(int i=0;i<size;i++){
        int count=1;
        if(arr[i]!=-1){
            for(int j=i+1;j<size;j++){
                count++;
                arr[j]=-1;
            }
            mp.insert({arr[i],count});
        }
    }
    return mp;
}
int main(){
    int arr[]={1,2,1,3,2};
    map<int,int> mp;
    mp=count(arr,5);

    for(auto i=mp.begin();i!=mp.end();i++){
        cout<<i->first<<":"<<i->second<<endl;
    }
    return 0;
}