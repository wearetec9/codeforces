#include <iostream>
#include <vector>
int main(){
    int n ; 
    std::cin>>n ; 
    std::vector<std::string> s ;  
    for(int i = 0 ; i < n ; i++){
        std::string k ; 
        std::cin>>k ; 
        if(k.length() <= 10 && k.length() >= 1){
            s.push_back(k);
        }
        else{
            std::string firstLetter = k.substr(0,1);
            int secondLetter = k.length()-2;
            std::string lastLetter = k.substr(k.length()-1);
            std::string finalWord = firstLetter + std::to_string(secondLetter) + lastLetter;
            s.push_back(finalWord); 
        }
    }
    for(std::string d : s){
        std::cout<<d<<std::endl ; 
    }
}