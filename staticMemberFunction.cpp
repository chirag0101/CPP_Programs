#include<iostream>

class Demo{
	int x=10;
	static int y;										//it has a file scope nd get's destroyed after the program is terminated

	public:
	void disp(){
		std::cout<<x<<std::endl;
		std::cout<<y<<std::endl;
	}

	static void info(){
		/*std::cout<<x<<std::endl;	this gives error as non-static variables can't be used/accessed in a static variables 
			cz non-static things get memory when object is created nd static variables get memory on their declaration
			but int z=20 is allowed (just can't be accessed from outside)*/
			int x=30;											//initialization of non-static allowed but accessing from outside not allowed
			std::cout<<x<<std::endl;
			std::cout<<y<<std::endl;
	}

};	

int Demo::y=20;													//static variable initialization(global namespace)

int main(){
	
	Demo obj;
	
	//std::cout<<Demo::y<<std::endl;				//static variables can be accessed using this way					
	
	obj.disp();
	
	Demo::info();				//static member functions can be accessed in this way also 
	
	obj.info();

	return 0;
}
