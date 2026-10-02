#include <iostream>
int main(){
    long long n ; 
    std::cin>>n;
    int luckyNumber = 0 ;
    while(n > 0){
        if(n % 10 == 7 || n % 10 == 4){
            luckyNumber++ ;
        }
            n /=10;
    
    } 
    if(luckyNumber == 7 || luckyNumber == 4)std::cout<<"YES"; 
    else std::cout<<"NO";

}