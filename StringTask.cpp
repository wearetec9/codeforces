#include <iostream>

int main(){
    std::string s ; 
    std::cin>>s ; 
    std::string k = "" ; 
    for(char c : s){
        if(c == 'A' || c == 'E' || c == 'I' || c == 'O' ||c == 'Y' || c == 'y' ||c == 'U' || c == 'a' ||c == 'e' ||c == 'i' ||c == 'o' ||c == 'u' ) continue; 
        else{
            if(isupper(c)){
                char lower =  tolower(c);
                k+= ".";
                k+= lower ; 
            }else{
                k += ".";
                k+= c ; 
            }
        }
        
    }
    std::cout<<k; 
}