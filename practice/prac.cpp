#include<iostream>
using namespace std;

int maxHouses(int *arr,int size,int rats,int unit){

    if(arr==NULL){
        return -1;
    }
    int foodToConsume=rats*unit;
    int houseCount=0;
    int foodConsumed=arr[0];
    for(int i=0;i<size;i++){
        if(foodConsumed<foodToConsume){
            foodConsumed=arr[i]+foodConsumed;
            houseCount++;
        }
    }

    if(foodConsumed<foodToConsume){
        return 0;
    }else{
        return houseCount;
    }
}

int main(){
    int arr[]={2,8,3,5,7,4,1,2};
    int r=7;
    int unit=2;
    int n=sizeof(arr)/sizeof(arr[0]);
    int maxHouse=maxHouses(arr,n,r,unit);
    cout<<maxHouse<<endl;
    return 0;
}