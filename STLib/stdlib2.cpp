//vectors for user defined class
//vector of objects

#include<iostream>
#include<vector>
using namespace std;

class Player{
    int jerNo;
    string pName;
    public:
        Player(int jerNo,string pName){
            this->jerNo=jerNo;
            this->pName=pName;
        }

        void getInfo(){
            cout<<"Name: "<<pName<<" JerNo: "<<jerNo;
        }
};

int main(){
    Player pOne(45,"Rohit");
    Player pTwo(18,"Kohli");
    Player pThree(7,"MSD");

    vector<Player> vPlayer={pOne,pTwo,pThree};

    for(int i=0;i<vPlayer.size();i++){
        vPlayer[i].getInfo();
        cout<<"\n";
    }

    return 0;
}