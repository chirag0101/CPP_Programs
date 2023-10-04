//also called as decay array (fixed size array)

#include<iostream>
#include<array>
using namespace std;

int main(){
 
    array<int,5> arr={10,20,30,40,50};           //requires the size of array as a parameter 
    cout<<arr.at(1);
 
    return 0;
}