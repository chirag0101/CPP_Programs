#include<iostream>
using namespace std;

class belowAvg{
    public:
        // belowAvg(char const* str){
        //     cout<<str<<"\n";
        // }
        void getException(){
            cout<<"belowAvg";
        }
};

class aboveAvg{
    public:
        // aboveAvg(char const* str){
        //     cout<<str<<"\n";
        // }
        void getException(){
            cout<<"aboveAvg";
        }
};

class Emp{
    public:
        int id;
        string name;
        float sal;
        
        Emp(int id,string name,float sal){
            this->id=id;
            this->name=name;
            this->sal=sal;
        }

        int operator[](int index){
                return this->sal;
        }

        friend ostream& operator<<(ostream& cout,Emp obj){
            cout<<obj.sal;
            return cout;
        }

};

int main(){
    Emp obj1(1,"chirag",10);
    Emp obj2(2,"soham",5);
    Emp obj3(3,"umesh",15);
    Emp obj4(4,"alok",4);
    Emp obj5(5,"rutul",3);

    Emp arr[]={obj1,obj2,obj3,obj4,obj5};

    try{
        for(int i=2;i<5;i++){
            if(arr[i].sal<=5){
                throw belowAvg();
            }else if(arr[i].sal>=15){
                throw aboveAvg();
            }else{
                cout<<"Avg sal";
                break;
            }
        }
    }catch(belowAvg obj){
        obj.getException();
    }catch(aboveAvg obj){
        obj.getException();
    }

    return 0;
}