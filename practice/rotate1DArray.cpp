#include<iostream>
using namespace std;

void rotateRight(int *arr,int k,int size){

    cout<<"Before Rotation: ";
    for(int a=0;a<size;a++){
        cout<<arr[a]<<" ";
    }
    cout<<endl;

    int i=0;
    int j=size-k-1;
    
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }

    i=size-k;
    j=size-1;

    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }

    i=0;
    j=size-1;

    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }

    cout<<"After Rotation: ";
    for(int a=0;a<size;a++){
        cout<<arr[a]<<" ";
    }
    cout<<endl<<endl;

}

void rotateLeft(int *arr,int k,int size){
    cout<<"Before Rotation: ";
    for(int a=0;a<size;a++){
        cout<<arr[a]<<" ";
    }
    cout<<endl;

    int i=k;
    int j=size-1;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }

    i=0;
    j=k-1;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }

    i=0;
    j=size-1;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }

    cout<<"After Rotation: ";
    for(int a=0;a<size;a++){
        cout<<arr[a]<<" ";
    }
    cout<<endl<<endl;
}

int main(){
        int size;
        cout<<"Enter Number of Elements to Insert in Array: ";
        cin>>size;
        int arr[size];
        cout<<"Enter Elements: ";
        for(int i=0;i<size;i++){
            cin>>arr[i];
        }

        int k;
        cout<<"Enter the Number of elements to Rotate: ";
        cin>>k;

    while(1){

        int ch;
        cout<<"1. Rotate Right"<<endl;
        cout<<"2. Rotate Left"<<endl;
        cout<<"3. Exit"<<endl;
        cout<<"Choice: ";
        cin>>ch;

        switch(ch){
            case 1:{
                rotateRight(arr,k,size);
                break;
            }

            case 2:{
                rotateLeft(arr,k,size);
                break;
            }

            case 3:{
                exit(0);
                break;
            }

            default:
                cout<<"You Entered Wrong Choice!";
                break;
        }

    }
    
    return 0;
}