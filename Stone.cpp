#include <iostream>
#include<cstring>
int main(){
    int n ;
    std::string s ; 
    std::cin>>n >> s; 
     
    
    int cnt = 0 ;
    int left  = 0 ;  
    for(int i = 1 ; i < s.length(); i++){
        if(s[i] == s[i-1]){
            cnt++;
        }
        
    }
    std::cout<<cnt;
}