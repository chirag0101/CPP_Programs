#include <bits/stdc++.h>
using namespace std;

int main()
{
  //write your code here
  int tC,size,marks,i=0,count=0;
  cin>>tC;
  
  while(tC--){
    
    cin>>size>>marks;
    
    int arr[size];
    
    for(int i=0;i<size;i++){
      cin>>arr[i]; 
      if((count==0)&&(arr[i]==marks)){
        
          cout<<i<<"\n";
          count++;
        
      }
      
    }
    count=0;
    
  }
  
  return 0;
}