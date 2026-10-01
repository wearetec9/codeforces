#include <iostream>
int main(){
    int n ; 
    std::cin>>n;
    int luckySeven = 0 ; 
    int luckyFour = 0 ;
    int randomNumber = 0 ;  
    while(n > 0){
        if(n % 10 == 7){
            luckySeven++ ;
            n /= 10 ;
        }
        else if(n % 10 == 4) {
            luckyFour++;
            n /= 10 ;
        }else{
            n /= 10 ;
            randomNumber++ ;
        }
    } 
    if(luckyFour + luckySeven == 7 || luckyFour + luckySeven == 4 || randomNumber == 0)std::cout<<"YES"; 
    else std::cout<<"NO";

}