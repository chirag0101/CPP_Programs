//class template-> class size is dynamic & the size depends on the type of value it holds when type is mentioned at the time of object creation
#include<iostream>
using namespace std;

template<typename T>

class Example{
    T data;

    public:
        Example(){
            cout<<"Example Constructor\n";
        }

};

int main(){  
    
    Example<int> obj;                                           //type should be specified while object creation
    cout<<sizeof(obj)<<"\n";                                     
    
    Example<double> obj2;
    cout<<sizeof(obj2)<<"\n";

    Example<int> *obj3=new Example<int>();
    
    return 0;
}