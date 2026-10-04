#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    int n,k ;
    std::vector<int> nums ; 
    std::cin>>n>>k;
    for(int i = 0 ; i < n; i++) {
        int inputs ;
        std::cin>>inputs;
        nums.push_back(inputs);
    } 
    if(k >=2  || std::is_sorted(nums.begin(), nums.end())){
        std::cout<<"YES"; 
    }
    else std::cout<<"NO";
}