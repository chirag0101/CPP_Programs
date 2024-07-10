#include<iostream>
#include<vector>

using namespace std;

vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {

        vector<int> v;
        
        int i=0;
        int j=0;
        
        while(i<n && j<m){
                if(arr1[i]==arr2[j]){
                    v.push_back(arr1[i]);
                    i++;
                    j++;
                }else if(arr1[i]<arr2[j]){
                    v.push_back(arr1[i]);
                    i++;
                }else{
                    v.push_back(arr2[j]);
                    j++;
                }
        }
        
        while(i<n){
            v.push_back(arr1[i]);
            i++;
        }
        
        while(j<m){
            v.push_back(arr2[j]);
            j++;
        }
        
        return v;
    }

int main(){
    int arr1[]={1,2,3,4,5};
    int arr2[]={4,5,6,7,8};
    int size1=sizeof(arr1)/sizeof(arr1[0]);
    int size2=sizeof(arr2)/sizeof(arr2[0]);

    vector<int> v=findUnion(arr1,arr2,size1,size2);

    for(int num:v){
        cout<<num<<" ";
    }
    cout<<endl;

    return 0;
}