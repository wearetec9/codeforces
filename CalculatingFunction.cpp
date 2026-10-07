#include <iostream>
#include <vector>
void dp(int n ){
    if(n == 1){
        
    }
}
int main(){
    long long n , sum  ;
    std::cin>>n ;
    
    if(n % 2 == 0){
        sum = n /2 ;
        
    }if(n % 2 == 1) {
        sum = ((n+1)/2 )* (-1) ;
       
    } 
    std::cout<<sum; 

}