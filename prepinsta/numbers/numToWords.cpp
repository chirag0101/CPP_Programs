#include<iostream>
using namespace std;

int main(){

    int num,count=0;
    string words[4];
    cout<<"Enter Num:";
    cin>>num;

    string units[]={"one","two","three","four","five","six","seven","eight","nine"};
    string tens[]={"ten","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninty"};
    string hundreds[]={"one hundred and","two hundred and","three hundred and","four hundred and","five hundred and","six hundred and","seven hundred and","eight hundred and","nine hundred and"};
    string thousands[]={"one thousand","two thousand","three thousand","four thousand","five thousand","six thousand","seven thousand","eight thousand","nine thousand"};

    while(num!=0){
        int rem=num%10;
        count++;
        if(count==1){
            words[3]=units[rem-1];
        }else if(count==2){
            words[2]=tens[rem-1];
        }else if(count==3){
            words[1]=hundreds[rem-1];
        }else{
            words[0]=thousands[rem-1];
        }
        num=num/10;
    }

    for(int i=0;i<4;i++){
        cout<<words[i]<<" ";
    }

    return 0;
}