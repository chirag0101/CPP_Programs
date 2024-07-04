//how 6 is the answer?
#include<iostream>
#include<string.h> 
using namespace std;
class IndiaBix
{
    char txtMsg[50]; 
    public:
    IndiaBix(char *str = NULL)
    {
    if(str != NULL)
       strcpy(txtMsg, str);
    }
    int BixFunction(char ch);
};
int IndiaBix::BixFunction(char ch)
{
    static int i = 0;
    if(txtMsg[i++] == ch){
        cout<< strlen((txtMsg + i)) - i<<" ";
        return strlen((txtMsg + i)) - i;
    }
    else{
            cout<< strlen((txtMsg + i)) - i<<" ";
            return BixFunction(ch);
    }
}
int main()
{
    IndiaBix objBix("Welcome to IndiaBix.com!");
    cout<< objBix.BixFunction('t');
    return 0;
}