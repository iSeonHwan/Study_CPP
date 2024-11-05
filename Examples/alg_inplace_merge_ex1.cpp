/*
Define: inplace_merge example code
date:24. 11. 5.
*/

#include <vector>
#include <algorithm>
#include <iostream>
#include <functional> //For greater<int>()

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

    v1.push_back(0);
    
    v1.push_back(4);
    v1.push_back(5);
    v1.push_back(6);
    v1.push_back(8);


    //print original
    cout << "Print Original v1" << endl;
    for(Iter1 = v1.begin(); Iter1 != v1.end(); Iter1++)
    {
        cout << *Iter1 << " ";        
    }
    cout << endl << endl;
    
    //Construct v2
    vector<int> v2 (v1);
    vector<int>::iterator break2;
    break2 = find (v2.begin(), v2.end(), 0); //find value 0 in v2
    sort(v2.begin(), break2, greater<int>());
    sort(break2, v2.end(), greater<int>());
    cout << "v2(sorting around 0): " << endl;

    vector<int>::iterator Iter2;
    for(Iter2 = v2.begin(); Iter2 != v2.end(); Iter2++)
        {
            cout << *Iter2 << " ";
        }

    //line-break
    cout << endl << endl;
    
    //inplace_merge v2
    inplace_merge( v2.begin(), break2, v2.end(), greater<int>());
    cout << "inplace_merge of v2:" << endl;
    for(Iter2 = v2.begin(); Iter2 != v2.end(); Iter2++)
        {
            cout << *Iter2 << " ";
        }
    
    return 0;
}
