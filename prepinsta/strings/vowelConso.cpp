#include<iostream>
using namespace std;

int main(){

    char c;
    cout<<"Enter a character: ";
    cin>>c;

    if(c=='A'||c=='a'||c=='E'||c=='e'||c=='I'||c=='i'||c=='O'||c=='o'||c=='U'||c=='u'){
        printf("Vowel\n");
    }else{
        printf("Consonent\n");
    }
    return 0;
}