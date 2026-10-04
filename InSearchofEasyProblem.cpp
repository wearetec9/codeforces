#include <iostream>
#include <vector>
int main(){
    std::vector<int> nums ;
    int n ; 
    std::cin>>n;
    for(int i = 0 ; i < n ;i++){
        int inputs ; 
        std::cin>>inputs;
        nums.push_back(inputs); 
    }
    int oneCnt = 0 ; 
    for(int i : nums ){
        if(i == 1)oneCnt++;
    }
    if(oneCnt>0) std::cout<<"HARD";
    else std::cout<<"EASY"; 
}