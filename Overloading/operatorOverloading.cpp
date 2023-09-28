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
	
    std::cout<<obj1.x<<std::endl;
    //internally    (prototype)->                            ostream& operator<<(ostream& cout,int obj1.x)         return cout;
	
    std::cout<<obj1<<std::endl;
    //call->                                      operator<<(cout,obj1)
    //internally->                            ostream& operator<<(ostream& cout,Demo& obj1)
    /*compiler can't determine the function parameter Demo which isn't written in ostream class so it throws error whereas 
    int,char,couble,etc are written in ostream class & compiler automatically identifies by default */
	
    //to work on printing obj1 we can overload the operator<< function we've done in next file

    error-> no matching function call for 'operator<<' std::ostream and Demo
    
    return 0; 
}
