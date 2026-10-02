#include <iostream>
#include <vector>
int main(){
    int n , h  ;
    std::cin>>n>>h;
    std::vector<int> nums(n , 0) ; 
    for(int i = 0 ; i< n;i++){
        std::cin>>nums[i] ; 
    }
    int width = 0 ; 
    for(int i = 0 ; i < nums.size(); i++){
        if(nums[i] <= h) width++;
        else if(nums[i] > h)width += 2 ; 
    }
    std::cout<<width ;
}