#include<iostream>
using namespace std;

class Demo{
    private:
        Demo(){
            cout<<"inside constructor\n";
        }
    public:
        static Demo *obj;
        static Demo *createObj(){
            return obj;
        }
        void getData(){
            cout<<this;
        }
};

Demo* Demo::obj=new Demo();

int main(){
    Demo *ptr=Demo::createObj()->getData();
    cout<<ptr;
}
