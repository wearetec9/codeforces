#include <iostream>
#include <vector>
int main(){
    
    int n ; 
    std::cin>>n ; 
    int solveCnt = 0 ; 
    int prevCnt  = 0 ; 
    for(size_t i = 0 ; i < n ; ++i){
        std::vector<int> nums ; 
        int petya , vasya , tonya ;
        std::cin>> petya >> vasya >> tonya; 
        nums.push_back(petya);
        nums.push_back(vasya);
        nums.push_back(tonya);
        int cnt = 0 ; 
        for(size_t j = 0 ; j < nums.size(); j++){
            if(nums[j] == 1 ){
                cnt++;
            }
        }
        if(cnt >= 2) solveCnt++; 
    }
    std::cout<<solveCnt ; 
}