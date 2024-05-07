//also called as decay array (fixed size array)

#include<iostream>
#include<array>
using namespace std;

int main(){
 
    array<int,5> arr={10,20,30,40,50};           //requires the size of array as a parameter 
    
    cout<<arr.at(1)<<" ";                             //gives the element at the specified position

    cout<<arr.front()<<" ";                          //gives the element at the front in an array

    cout<<arr.back()<<" ";                          //gives the element at the back in an array
 
    cout<<arr.data()<<" ";                          //gives the address of 1st element in an array

    cout<<arr.max_size()<<" ";                    

    return 0;
}