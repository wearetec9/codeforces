#include <iostream>
int main(){
    std::string s ; 
    std::cin>>s ; 
    int upperCase = 0 ; 
    int lowerCase = 0 ; 
    for(char c : s){
        if(isupper(c)) upperCase++;
        else if(islower(c)) lowerCase++;
    }
    std::string k = ""; 

    if(upperCase > lowerCase){
        for(char c : s){
            k += toupper(c);
        }
    }
    else if(lowerCase > upperCase){
        for(char c : s){
            k += tolower(c);
        }
    }
    else if(upperCase == lowerCase){
        for(char c : s){
            k += tolower(c);
        }
    }
    std::cout<< k ; 
}