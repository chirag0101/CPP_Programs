#include<iostream>

class Demo{
	public:
		int x=10;
		void getData(){
			std::cout<<"In getData"<<std::endl;
		}
};

int main(){
	Demo obj1;
	std::cout<<obj1<<std::endl;
	return 0; 
}
