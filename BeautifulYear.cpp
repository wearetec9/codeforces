#include<iostream>
#include<unordered_map>
int main(){
    int n ;
    std::cin>>n ; 
    int currentYear = n ; 
    int cnt = 1 ; 
    while(true){
        n++;
        std::string year = std::to_string(n);
        bool unique = true ; 
        for(int i = 0 ; i < year.length(); i++){
            for(int j = i+1 ; j< year.length(); j++){
                if(year[i] == year[j]){
                    unique = false;
                    break ;  
                }
            }
            if(!unique){
                break ; 
            }
        } 
        if(unique){
            break;
        }
        
    }
    std::cout<<n ; 



    
}