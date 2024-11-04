/*
Define: inplace_merge example code
date:24. 11. 3.
*/

/*
template<class BidirectionalIterator>
void inplace_merge(
  BidirectionalIterator first,Original" << end;
      |     ~~~~~~~~~~~~~~~~~~~~~~~~~^~~~~~
  BidirectionalIterator middle,
  BidirectionalIterator last);

template<class BidirectionalIterator, class Compare>
void inplace_merge(
  BidirectionalIterator first,
  BidirectionalIterator middle,
  BidirectionalIterator last,
  **Compare pred**);

template<**class ExecutionPolicy**, class BidirectionalIterator>
void inplace_merge(
  ExecutionPolicy&& exec,
  BidirectionalIterator first,
  BidirectionalIterator middel,
  BidirectionalIterator last);

template<class ExecutionPolicy, class BidirectionalIterator, **class Compare**>
void inplace_merge(
  ExecutionPolicy&& exec,
  BidirectionalIterator first,
  BidirectionalIterator middle,
  BidirectionalIterator last,
  Compare pred);

*/

#include <vector>
#include <algorithm>
#include <iostream>

int main()
{
    //basic setting
    using namespace std;
    vector<int> v1;
    vector<int>::iterator Iter1;

    //input value
    v1.push_back(7);
    v1.push_back(3);
    v1.push_back(2);
    v1.push_back(1);
    v1.push_back(4);
    v1.push_back(5);
    v1.push_back(6);
    v1.push_back(8);


    //print original
    cout << "Print Original vector 1" << endl;
    for(Iter1 = v1.begin(); Iter1 != v1.end(); Iter1++)
    {
        cout << *Iter1 << " ";        
    }
    cout << endl;
    
    vector<int>::iterator break1;
    break1 = find(v1.begin(), v1.end(), 1);
    inplace_merge(v1.begin(), break1, v1.end());
    
    //result print
    cout << "inplace_merge result" << endl;
    for(Iter1 = v1.begin(); Iter1 != v1.end(); Iter1++)
    {
        cout << *Iter1 << " ";
    }
    
    return 0;
}
