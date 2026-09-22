#include <iostream>
int main (){
    std::string word ;
    std::cin>>word ; 
    std::string capitalizeWord = ""; 
    std::string restWord =   word.substr(1 , word.length());
    capitalizeWord = toupper(word[0]) ;
    std::string finalWord = capitalizeWord + restWord ; 
    std::cout<<finalWord ; 
}