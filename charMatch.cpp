//compare 2 strings & find if all the alphabets are present in both or not

#include<iostream>

int main(){
    
    int size;
    std::cout<<"Enter Size of Strings:";
    std::cin>>size;

    char s1[size],s2[size];
    
    //input string from user
    std::cout<<"1st String:";
    for(int i=0;i<size;i++){
    std::cin>>s1[i];
    }

    std::cout<<"2nd String:";
    for(int i=0;i<size;i++){
    std::cin>>s2[i];
    }

    int ans=1;
    
    for(int i=0;i<size;i++){
        for(int j=0;i<size;j++){
            if(s1[i]!=s2[j]){
                ans=0;
            }else{
                ans=1;
            }
        }
        if(ans==0){
            std::cout<<"Match:No!\n";
            break;
        }
    }

    if(ans==1){
        std::cout<<"Match:Yes!\n";
    }

    return 0;

}