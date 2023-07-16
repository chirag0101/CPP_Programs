#include<iostream>

class Player{

    public:
        
        int jerNO;                                                                  //it is 0/garbage value
        std::string name;                                                      //empty space is been initialized

            void getinfo(){
                std::cout<<jerNO<<"="<<name<<std::endl;
        }    

};


int main(){

    Player obj{18,"chirag"};                                               //we can use {values} to initialize values to instance variables from main() 
    //the above parameters go as:
    //obj.jerNO=18;
    //obj.name="chirag";

    obj.getinfo();
    return 0;

}