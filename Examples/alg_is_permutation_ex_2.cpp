/*
define: algorithm is_permuatation example code
date: 24. 11. 13.
*/

#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <random>

using namespace std;

int main()
{
	// 두 개의 벡터를 만듦.
	vector<int> vec_1{0, 1, 2, 3, 4, 5};
	vector<int> vec_2{0, 1, 2, 3, 4, 5};
	

	//두 벡터를 비교하고 그 결과를 출력함.
	cout << "1. Compare result:";
	cout << boolalpha << is_permutation(vec_1.begin(), vec_1.end(), vec_2.begin(), vec_2.end()) << endl;
	
	// 랜덤 엔진 초기화
	random_device rd;
	mt19937 gen(rd());
	
	//vec_2 원소를 랜덤하게 섞기
	shuffle(vec_2.begin(), vec_2.end(), gen);
	
	//섞인 vec_2 값 출력함
	cout << endl << "Shuffle Vec2: " << endl;
	for (int num : vec_2){
		cout << num << " ";
	}
	cout << endl << endl;
	
	
	//두 번째로 두 벡터를 비교하고 그 결과를 출력함.
	cout << "2. Compare result:";
	cout << boolalpha << is_permutation(vec_1.begin(), vec_1.end(), vec_2.begin(), vec_2.end()) << endl;
	
    return 0;
}