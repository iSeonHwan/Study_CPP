/*
Define: Algoritm includes example code
 - compare user's input value with stored value
 
Date: 2024. 11. 2.
*/

#include <vector>
#include <algorithm>
#include <iostream>

int main()
{
  using namespace std;
  //make a vector object
  vector<int> v1a, v1b;

  v1a.push_back(1);

  //Input cin
  cout << "Input:" << endl;
  int Inb;
  cin >> Inb;

  //send Inb;
  v1b.push_back(Inb);

  //result express
  bool Result1;
  Result1 = includes(v1a.begin(), v1a.end(), v1b.begin(), v1b.end());

  cout << Result1 << endl;

}
