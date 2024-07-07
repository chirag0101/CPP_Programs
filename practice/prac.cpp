#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> nums={1,2,3,4,5,6,7};
    int k=3;

    int i=0;
    int j=k-1;

    while(i<j){
        swap(nums[i],nums[j]);
        i++;
        j--;
    }
    for(int k=0;k<nums.size();k++){
        cout<<nums[k]<<" ";
    }
    cout<<endl;

    i=k;
    j=nums.size()-1;

    while(i<j){
        swap(nums[i],nums[j]);
        i++;
        j--;
    }

    for(int k=0;k<nums.size();k++){
        cout<<nums[k]<<" ";
    }
    cout<<endl;

    i=0;
    j=nums.size()-1;

    while(i<j){
        swap(nums[i],nums[j]);
        i++;
        j--;
    }
    for(int k=0;k<nums.size();k++){
        cout<<nums[k]<<" ";
    }
    cout<<endl;


    return 0;
}