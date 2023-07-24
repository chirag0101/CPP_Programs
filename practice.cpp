#include<iostream>

class Player{
   Player(){
    std::cout<<"pvt ";
   }

   public:
        static Player* obj(){
            Player *obj1=new Player();
            return obj1;
        }

        void showData(){
            printf("Pvt constructor accessed/n");
        }
};


int main(){
    Player *player;
    player=Player::obj();

    player->showData();
    return 0;
}
