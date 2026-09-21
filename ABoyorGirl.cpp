#include <iostream>
#include <unordered_map>
int main(){
    std::unordered_map<char,int> mp ;
    std::string user_name;
    std::cin>>user_name ;
    int even = 0 ;  
    int odd = 0 ;  
    for(char c : user_name) mp[c]++;
    for(auto const& c : mp){
        int freq = c.second ; 
        if(freq >= 1) odd++;
    }
    if(odd % 2 == 0) std::cout<<"CHAT WITH HER!";
    else std::cout<<"IGNORE HIM!";
}