/*
define: Codeup Problem 1283
 - url: https://codeup.kr/problem.php?id=1283
date: 24. 11. 5.
*/
#include <iostream>
#include <cmath> //for round()

int main() {
    //basic setting
    using namespace std;
    double Iam; //int Input Value(amount of money invested).
    int Ini; //int Input Value(Number of investment days).
    double Ier; //int Input value(The investment earning rate)
    int Ing; //int net gain

    //Input value
    cin >> Iam >> Ini;

    //store initial investment meney
    int Iim = Iam; // Int initial money
    
    
    //caculate the investment return for the specified date
    for(int i = 1; i <= Ini ; i++)
        {
            cin >> Ier;
            Iam = Iam + (Iam * (Ier / 100.0) );
        }

    //caculate net gain as percentage.
    Ing = round(Iam - Iim);
 
    //print return
    cout << Ing << endl;

     if(Ing > 0)
     {
         cout << "good";
     }
    else if(Ing == 0)
    {
        cout << "same";
    }
    else
    {
        cout << "bad";    
    }
    
    return 0;
}
