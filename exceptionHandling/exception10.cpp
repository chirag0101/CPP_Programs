#include<iostream>
using namespace std;

class Emp{
    int id;
    string name;
    float sal;

    public:
        Emp(int id,string name,float sal){
            this->id=id;
            this->name=name;
            this->sal=sal;
        }

};

int main(){
    Emp obj1(1,"chirag",10);
    Emp obj2(2,"soham",5);
    Emp obj3(3,"umesh",15);
    Emp obj4(4,"alok",4);
    Emp obj5(5,"rutul",3);

    Emp arr[]={obj1,obj2,obj3,obj4,obj5};

    Emp obj6;

    try{
        for(int i=0;i<5;i++){
            cout<<arr[i.sal];
        }
    }catch(){

    }

    return 0;
}