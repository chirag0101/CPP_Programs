#include<iostream>
#include<vector>
#include<string>
#include<stdlib.h>
using namespace std;

int main(){
    int num1;
    cout<<"Enter Num:";
    cin>>num1;

    vector<int> arr;

    string s;

    int num2=num1;
    
    while(num2!=0){
        int rem=num2%10;
        arr.push_back(rem);
        num2=num2/10;
    }

    cout<<"The words are:";
    int places=arr.size();
    for(int i=arr.size()-1;i>=0;i--){
        int ch=arr[i];

        switch(ch){
            case 0 :{
                s=s+" Zero";
                break;
            }
            case 1 :{
                s=s+" One";
                break;
            }
            case 2 :{
                s=s+" Two";
                break;
            }
            case 3 :{
                s=s+" Three";
                break;
            }
            case 4 :{
                s=s+" Four";
                break;
            }
            case 5 :{
                s=s+" Five";
                break;
            }
            case 6 :{
                s=s+" Six";
                break;
            }
            case 7 :{
                s=s+" Seven";
                break;
            }
            case 8 :{
                s=s+" Eight";
                break;
            }
            case 9 :{
                s=s+" Nine";
                break;
            }
        }


    }

    cout<<s<<endl;

    return 0;
}