#include<iostream>
#include<string>
using namespace std;

int checkString(string str,int size){
    //check length
    if(size>=4){
        //check if number
        if(str[0]>=48 && str[0]<=57){
            return 0;
        }else{
            //count integer>1 && uppercase>1
            int num=0;
            int uprCase=0;
            for(int i=0;i<size;i++){
                //check " " or  /
                if(str[i]==47 || str[i]==' '){
                    return 0;
                }
                //check int
                else if(str[i]>47 && str[i]<58){
                    num++;
                }
                //check upr case
                else if(str[i]>64 && str[i]<91){
                    uprCase++;
                }
                else{
                    continue;
                }
            }
            if(num>=1 && uprCase>=1){
                return 1;
            }else{
                return 0;
            }
        }
    }else{
        return 0;
    }
    return 0;
}

int main(){
    string str;
    cout<<"String:";
    getline(cin,str);
    int size=str.length();
    //     for(int i=0;i<size;i++){
    //     cout<<str[i]<<" ";
    // }
    // cout<<size<<endl;

    int status=checkString(str,size);

    cout<<status<<endl;
    return 0;
}