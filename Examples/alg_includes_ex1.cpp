/*
Define: Algoritm includes example code
Date: 2024. 11. 2.
*/

#include <vector>
#include <algorithm>
#include <iostream>

int main()
{
  using namespace std;
  vector<int> v1a, v1b;

  v1a.push_back(1);
  v1a.push_back(2);

  v1b.push_back(1);
  v1b.push_back(2);

  //result express
  bool Result1;
  Result1 = includes(v1a.begin(), v1a.end(), v1b.begin(), v1b.end());

  cout << Result1 << endl;

}
