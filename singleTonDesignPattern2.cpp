//method 2

#include<iostream>
using namespace std;

class Demo{
    private:
        Demo();
        static int count;

    public:
        static Demo* createObj(){
            if(count==1){
                return NULL;
            }
            count++;
            return new Demo();
        }
};

int Demo::count=0;

int main(){
    Demo *obj=Demo::createObj();
    // Demo *obj1=Demo::createObj();

    return 0;
}