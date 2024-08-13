#include<iostream>
using namespace std;

int countMagicNums(int n){
    int count=0;
    for(int i=1;i<=n;i++){
            int num=i;
            int sum=0;
            while(num!=0){
                int rem=num%2;
                if(rem==1){
                    sum+=2;
                }else{
                    sum+=1;
                }
                num=num/2;
            }
            if(sum%2!=0){
                count++;
            }
    }
    return count;
}

int main(){
    int n;
    cin>>n;
    cout<<countMagicNums(n)<<endl;
    return 0;
}