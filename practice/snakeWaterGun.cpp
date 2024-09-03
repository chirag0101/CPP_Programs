#include<iostream>
#include<string>
using namespace std;

void snakeWaterGun(string str){
    int wins=0;

    string move1;
    string move2;
    string word;
    int i=0;
    while(i<str.length()){
        word+=str[i];
        i++;
        if(word=="snake" || word=="water" || word=="gun"){
            (move1=="")? move1=word : move2=word;
            if((move1=="snake" && move2=="water") || (move1=="water" && move2=="gun") || (move1=="gun" && move2=="snake")){
                wins++;
                move1="";
                move2="";
            }else if((move2=="snake" && move1=="water") || (move2=="water" && move1=="gun") || (move2=="gun" && move1=="snake")){
                move1="";
                move2="";
            }
            word="";
        }
    }
    cout<<wins<<endl;

}

int main(){
    string str;
    getline(cin,str);

    snakeWaterGun(str);
    return 0;
}