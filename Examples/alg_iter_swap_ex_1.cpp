/*
define: alg iter_swap example code
date: 24. 12. 2.
reference: GPT 4o
*/

#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    std::vector<int> vec = {1, 2, 3, 4, 5};
    
    //변경 전 출력
     for(int n : vec){
        std::cout << n << " ";
    }
    
    std::cout << std::endl;   
    
    
    //1번째와 3번째 요소를 교환
    std::iter_swap(vec.begin(), vec.begin()+2);
    
    //결과 출력
    for(int n : vec){
        std::cout << n << " ";
    }
    
    return 0;
}
