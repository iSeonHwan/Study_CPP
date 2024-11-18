/*
define: alg_is_sorted_ex_2
date: 24. 11. 18.
*/

#include <iostream>
#include <vector>
#include <algorithm>

//check for sorting using a user-defined comparison function.
bool descending(int a, int b){
    return a > b;
}

int main(){
    std::vector<int> v1 = {5, 4, 3, 2, 1};
    std::vector<int> v2 = {1, 2, 3, 4, 5};

    if(std::is_sorted(v1.begin(), v1.end(), descending)){
        std::cout << "v1 is sorted in descending order.\n";
    }
    else{
        std::cout << "v1 is not sorted in descending order.\n";
    }

    if(std::is_sorted(v2.begin(), v2.end(), descending)){
        std::cout << "v2 is sorted in descending order.\n";
    }
    else{
        std::cout << "v2 is not sorted in descending order.\n";
    }

    return 0;
}