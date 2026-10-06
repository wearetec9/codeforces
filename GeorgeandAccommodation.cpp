#include <iostream>
int main(){
    int n; 
    int people = 2 ;
    int cnt = 0 ;  
    std::cin>>n ; 
    for(int i = 0 ; i < n ; i++){
        int p , q ;
        std::cin>> p >> q ; 
        if(people + p <= q){
            cnt++;
        }
    }
    std::cout<<cnt ; 

}