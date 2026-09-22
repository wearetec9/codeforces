#include <iostream>
#include <algorithm>
int main(){
    std::string s ;
    std::cin>>s ; 
    int stop = 0 ; 
    std::string k = ""; 
    for(int i = 0 ; i < s.length() ; i++){
        if(s[i] == '+'){
            continue; 
        }else k += s[i];
    }
    sort(k.begin(),k.end());
    std::string final =""; 
    for(int i =0 ; i < k.length(); i++){
        if(i == k.length()-1){
            final += k[i]; 
            break ; 
        }
        std::string adding = "+"; 
        final += k[i] + adding;
    }
    std::cout<<final ;
}