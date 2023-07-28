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
            std::cout<<"mem";
			return this->x/obj2.x;
		}

		//between member & friend function , member function gets priority

		//friend function
		friend int operator/(const Demo &obj1,const Demo &obj2){
            std::cout<<"fri";
			return obj1.x/obj2.x;
		}
		
};

//friend function
// int operator/(const Demo &obj1,const Demo &obj2){
//             std::cout<<"fri";
// 		return obj1.x/obj2.x;
// }

//normal function
// int operator/(const Demo &obj1,const Demo &obj2){
// 	return obj1.getData()/obj2.getData();
// }

int main(){

	Demo obj1(2);
	Demo obj2(2);

	std::cout<<obj1/obj2<<std::endl;
	
	return 0; 

}
