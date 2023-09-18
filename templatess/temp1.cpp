//for a given function min2 which have same working but different arguments, inorder to perform operations for each given different 
//arguments we need to write new min2 function, to overcome this problem we use templates so based on the arguments passed 
//compiler changes the return types & parameters


#include<iostream>
using namespace std;

char min2(char x,char y){
    return (x<y)?x:y;
}

int min2(int x,int y){
    return (x<y)?x:y;
}

float min2(float x,float y){
    return (x<y)?x:y;
}

double min2(double x,double y){
    return (x<y)?x:y;
}

int main(){
    cout<<min2('A','B')<<endl;    
    cout<<min2(10,20)<<endl;    
    cout<<min2(10.5f,20.5f)<<endl;    
    cout<<min2(10.5,20.5)<<endl;    

    return 0;
}