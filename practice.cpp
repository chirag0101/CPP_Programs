#include<iostream>

class Player{
    int jerNO;                                                                  //it is 0/garbage value
    std::string name;                                                      //empty space is been initialized

    public:
        void setInfo(){
            std::cout<<"Name:";
            // fgets("name",15,stdin);
            std::cin>>name;

            std::cout<<std::endl<<"JerNO:";
            std::cin>>jerNO;
            
        }

        void getinfo(){
            std::cout<<std::endl<<jerNO<<"="<<name<<std::endl;
	}    
};


int main(){
    Player obj;
    obj.setInfo();                                               
    obj.getinfo();
    return 0;
}
