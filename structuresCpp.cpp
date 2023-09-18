#include<iostream>

// struct Player{
//     int jerNo;
//     char name[20];
// };

//structures in c doesn't allow variable initialization & no function can be created

struct Player{
    int jerNo=03;
    char name[20]="Chirag Suryawanshi";

    void display(){
        std::cout<<"Jersey Number: "<<jerNo<<"\nName: "<<name<<std::endl;
    }
};

//structures in c++ allows variable initialization & functions can also be created

int main(){

    // struct Player obj;       way to create obj of a structure in c

    Player obj;                 //object creation in c++
    //memory is given only after object creation
    
    printf("Player Details:\n");
    std::cout<<obj.jerNo<<std::endl;                //to access variables of structures 
    std::cout<<obj.name<<std::endl;
    
    obj.display();                                                 //to access functions of structures

    return 0;
}