#include<iostream>
using namespace std;
class BixBase
{   
    public:
    BixBase()
    {
        cout<< "Base OK. "; 
    }
    virtual ~BixBase()
    {
        cout<< "Base DEL. "; 
    }
};
class BixDerived: public BixBase
{
    public:
    BixDerived()
    { 
        cout<< "Derived OK. "; 
    }
    ~ BixDerived()
    { 
        cout<< "Derived DEL. "; 
    }
};
int main()
{
    BixBase *basePtr = new BixDerived();
    delete basePtr;
    return 0;
}