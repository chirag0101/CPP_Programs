#include<iostream>

class Two;  // (optional) , forward declaration is not mandatory in friend class as we don't pass an object like the friend function

class One{
	
	int x=10;

	protected:
		int y=20;
	
	public:
		One(){
			std::cout<<"In Constructor of class one"<<std::endl;
		}
    
    friend class Two;
};

class Two{
    
    public:
        Two(){
            std::cout<<"In constructor of Class two "<<std::endl;
        }

    private:
        void getData(const One &obj){
            std::cout<<obj.x<<std::endl;
            std::cout<<obj.y<<std::endl;
        }

    public:
        void accessData(const One &obj){
            std::cout<<obj.x<<std::endl;
            std::cout<<obj.y<<std::endl;
            getData(obj);
        }
};

int main(){
    One obj1;
    Two obj2;
    obj2.accessData(obj1);
    return 0;
}
