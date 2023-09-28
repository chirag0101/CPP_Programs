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
        cout<<obj[i]<<" ";                                      // =>internal call              friend T operator[](vector obj,T i){ 
    }                                                                       //                                                  return arr[i];
                                                                            //                                       }           

    return 0;
}

/*  the above code can be written by us as: 
#include<iostream>
using namespace std;

class Demo{
    char arr[5]={10,20,30,40,50};
    public:
    template<typename T>
        T operator[](T i){
            return arr[i];
        }
};

int main(){
    Demo obj;
    cout<<obj[2];
    return 0;
}
*/