#include<iostream>
int main(){
	int x=10;
	int *ptr=&x;
	int &ptr2=x;

	std::cout<<ptr2<<std::endl;
	std::cout<<&ptr2<<std::endl;
	std::cout<<&x<<std::endl;
	std::cout<<ptr<<std::endl;
	std::cout<<&ptr<<std::endl;

}