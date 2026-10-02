#include <iostream>
int main(){
    int n ; 
    std::string s ;
    std::cin >> n >> s ; 
    int A = 0 ; 
    int D = 0 ; 
    for(char c : s ){
        if(c == 'A') A++;
        else if(c == 'D')D++;
    }
    if(A > D) std::cout<<"Anton";
    else if(D >A )std::cout<<"Danik";
    else std::cout<<"Friendship";
}