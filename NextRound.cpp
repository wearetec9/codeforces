#include <iostream>

int main(){
    int n , m ; 
    int cnt = 0 ; 
    std::cin >> n >>m ; 
    for(size_t i = 0 ; i < n ; ++i){
        int inputs ;
        std::cin>>inputs ; 
        if(inputs > m) cnt++; 
    }
    if(cnt == 0)std::cout<<0 ; 
    else if(cnt > 1)std::cout<<cnt ; 

}
