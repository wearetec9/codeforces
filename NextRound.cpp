#include <iostream>
#include <vector>
int main(){
    int n , k  ; 
    int cnt = 0 ; 
    std::cin >> n >>k ; 
    std::vector<int> ans ; 
    for(size_t i = 0 ; i < n ; ++i){
        int inputs ;
        std::cin>>inputs; 
        ans.push_back(inputs);
    }
    for(int i = 0 ; i < ans.size(); i++){
        if((ans[i]>= ans[k-1]) && ans[i]>0){
            cnt++; 
        }
    }
    std::cout<<cnt ; 

}
