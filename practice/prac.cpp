#include<iostream>
#include<vector>
using namespace std;

    bool check(vector<int>& nums) {
        int rotate=0;

        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1]){
                rotate=(nums.size())-(i+1);
                int i=0;
                int j=nums.size()-rotate-1;

                while(i<j){
                    swap(nums[i++],nums[j--]);
                }

                for(int i=0;i<nums.size();i++){
                    cout<<nums[i]<<" ";
                }
                cout<<endl;

                i=nums.size()-rotate;
                j=nums.size()-1;
                while(i<j){
                    swap(nums[i++],nums[j--]);
                }
            
                for(int i=0;i<nums.size();i++){
                    cout<<nums[i]<<" ";
                }
                cout<<endl;

                i=0;
                j=nums.size()-1;

                while(i<j){
                    swap(nums[i],nums[j]);
                    i++;
                    j--;
                }
                for(int i=0;i<nums.size();i++){
                    cout<<nums[i]<<" ";
                }
                cout<<endl;
                                
                break;
            }
        }

        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1]){
                return false;
            }
        }
        return true;
    }
int main(){
    vector<int> arr={3,4,5,1,2};
    if(check(arr)){
        cout<<"True";
    }else{
        cout<<"False";
    }
    return 0;
}