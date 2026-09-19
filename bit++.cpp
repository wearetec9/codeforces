#include <iostream>
int main(){
    int n ; 
    std::cin >> n ; 
    int x = 0 ;
    for(size_t i = 0 ; i < n ; ++i){
        std::string s ;
        std::cin>> s ; 
        if(s == "X++" || s == "++X") x+=1;
        else if(s == "X--" || s == "--X") x-=1;
    }
    std::cout<<x ; 
    
}