#include<iostream>
using namespace std;

int main(){
    int arr1[]={4,5,10,16,19};
    int size1=(sizeof(arr1)/sizeof(arr1[0]));

    int arr2[]={2,4,16};
    int size2=(sizeof(arr2)/sizeof(arr2[0]));

    int un[size1+size2],sizeTot;

    sizeTot= size1>size2?size1:size2;
    cout<<sizeTot;
    int i=0,j=0,count1=0,count2=0;

    while(i<sizeTot){
        if(arr1[i]==arr2[i]){
            un[j]=arr1[i];
        }else if(arr1[i]<arr2[i]){
            for(int k=0;k<=j;k++){
                if(arr1[i]==un[k]){
                    count1++;
                }
                if(arr2[i]==un[k]){
                    count2++;
                }
            }
            if(count1==1){
                
            }else if(){

            }else{
                un[j]=arr1[i];
                un[j+1]=arr2[i];
                j=j+2;
                i++;
            }

        }else{
            un[j]=arr2[i];
            un[j+1]=arr1[i];
            j=j+2;
            i++;
        }
    }

    for(int i=0;i<sizeTot;i++){
        cout<<un[i]<<" ";
    }

    return 0;
}