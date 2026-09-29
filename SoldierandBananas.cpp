#include <iostream>
int main(){
    int k , n , w ;
    std::cin>>k >> n >> w ; 
    int amount = k * w  * (w+1)/2  ; 
    int borrow = (amount > n) ? (amount - n ) : 0 ; 
    std::cout<<borrow;
}