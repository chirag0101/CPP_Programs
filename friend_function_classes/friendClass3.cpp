//making a method of 2nd class friend & not the whole class a friend 

#include<iostream>

class One;

class Two{                                                  //to make 'two' as friend we need to write it first
    
    public:
        Two(){
            std::cout<<"In constructor of Class two "<<std::endl;
        }

        void accessData(const One &obj);                    //we need to declare One first
};

class One{
	
	int x=10;

	protected:
		int y=20;
	
	public:
		One(){
			std::cout<<"In Constructor of class one"<<std::endl;
		}
    
    friend void Two::accessData(const One &obj);

};

void Two::accessData(const One &obj){
            std::cout<<obj.x<<std::endl;
            std::cout<<obj.y<<std::endl;
        }

int main(){
    
    One obj1;
    
    Two obj2;
    
    obj2.accessData(obj1);
    
    return 0;
}
