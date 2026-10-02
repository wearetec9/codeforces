#include <iostream>
#include <algorithm>
int main(){
    std::string s ; 
    std::string t ; 
    std::cin>>s>>t ;
    std::string r = ""; 
    for(int i = t.length()-1 ; i>=0 ; i--){
        r += t[i]; 
    }
    if(r == s) std::cout<<"YES";
    else std::cout<<"NO"; 
}