#include<iostream>

class Demo{
	public:
		int x=10;
		
		Demo(int x){
			this->x=x;
		}

		int getData() const{
			return x;
		}

		//member function
		int operator/(const Demo &obj2){
			return this->x/obj2.x;
		}

		//friend function
		friend int operator/(const Demo,const Demo);
		
};

//friend function
int operator/(const Demo &obj1,const Demo &obj2){
		return obj1.x/obj2.x;
}

//normal function
// int operator/(const Demo &obj1,const Demo &obj2){
// 	return obj1.getData()/obj2.getData();
// }

int main(){

	Demo obj1(10);
	Demo obj2(5);
	std::cout<<obj1/obj2<<std::endl;
	return 0; 

}
