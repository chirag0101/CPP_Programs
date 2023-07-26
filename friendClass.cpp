#include<iostream>

class One{
	
	int x=10;

	protected:
		int y=20;
	
	public:
		One(){
			std::cout<<"In Constructor"<<std::endl;
		}
};
