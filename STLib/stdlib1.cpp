//vectors - dynamic array(size can increase at runtime), operations:(resizing)

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> obj;            //giving <int> to tell the type of array to be created
    
    obj.push_back(1);          //add element to the end of a vector, size increases by 1
    obj.push_back(2);
    obj.push_back(3);
    obj.push_back(4);
    obj.push_back(5);

    for(int i=0;i<obj.size();i++){
        cout<<obj[i]<<" ";
    }

    return 0;
}