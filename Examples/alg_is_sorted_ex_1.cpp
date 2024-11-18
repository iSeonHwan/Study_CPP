/*
define: algorithm is_sorted example code
date: 24. 11. 18.
*/

#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> v1 = {1, 2, 3, 4, 5};
    std::vector<int> v2 = {1, 3, 2, 4, 5};

    if(std::is_sorted(v1.begin(), v1.end())){
        std::cout << "v1 is sorted in ascending order.\n";
    }
    else{
        std::cout << "v1 is not sorted in ascending order.\n";
    }

    if(std::is_sorted(v2.begin(), v2.end())){
        std::cout << "v2 is sorted in ascending order.\n";
    }
    else{
        std::cout << "v2 is not sorted in ascending order.\n";
    }

    return 0;
}