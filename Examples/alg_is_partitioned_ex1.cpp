/*
Define: is_partitioned ex1
date: 24. 11. 8.
*/

#include <iostream>
#include <vector>
#include <algorithm>

int main(){

	std::vector<int> vec1 = {2, 4, 6, 1, 3, 5};
	
	//test even function
	auto is_even = [](int n) { return n % 2 == 0; };

    //test vec1
	bool result1 = std::is_partitioned(vec1.begin(), vec1.end(), is_even);
	if(result1)
	{
		std::cout << "벡터는 분할되어 있습니다." << std::endl;
	}
	else
	{
		std::cout << "벡터는 분할되어 있지 않습니다." << std::endl;
	}

    std::cout << std::endl;

    //test vec2
    std::vector<int> vec2 = {1, 3, 5, 2, 4, 6};
    bool result2 = std::is_partitioned(vec2.begin(), vec2.end(), is_even);
    if(result2)
    {
        std::cout << "벡터는 분할되어 있습니다." << std::endl;
    }
    else
    {
        std::cout << "벡터는 분할되어 있지 않습니다." << std::endl;
    }

    std::cout << std::endl;

    //test vec3
    std::vector<int> vec3 = {2, 4, 6, 2, 4, 6};
    bool result3 = std::is_partitioned(vec3.begin(), vec2.end(), is_even);
    if(result3)
    {
        std::cout << "벡터는 분할되어 있습니다." << std::endl;
    }
    else
    {
        std::cout << "벡터는 분할되어 있지 않습니다." << std::endl;
    }
    
	return 0;
}
