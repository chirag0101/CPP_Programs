#include<iostream>

class Demo{
	int x=10;
	static int y;

	public:

    void fun(){
        int a=40;
        static int b=50;                            //it's a local static variable(inside function) which can be initialized
    		std::cout<<x<<std::endl;
		    std::cout<<y<<std::endl;
        	std::cout<<a<<std::endl;
		    std::cout<<b<<std::endl;
    }

    static void gun(){
        int a=40;
        static int b=50;
    		//std::cout<<x<<std::endl;              gives error as non-static var from outside is not allowed
		    std::cout<<y<<std::endl;
        	std::cout<<a<<std::endl;
		    std::cout<<b<<std::endl;
    }
    
};	

int Demo::y=20;													

int main(){
	
	Demo obj;

    obj.fun();
    obj.gun();

    Demo *obj1=new Demo();

    obj1->fun();
    obj1->gun();
	
	return 0;
}
