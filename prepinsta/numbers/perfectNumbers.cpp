#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n,num,i=0,sum=0;
  cin>>n;
  
  while(i<n){
    cin>>num;
    sum=0;
    
    for(int j=1;j<num/2;j++){
      if(num%j==0){
        sum=sum+j;
      }
    }
    
    if(sum==num){
      cout<<"true\n";
    }else{
      cout<<"false\n";
    }
    
    i++;
  }
  
  return 0;
}