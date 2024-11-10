/*
Define: codeup problem 1284
date: 24. 11. 9.
*/

#include <iostream>
#include <cmath>

int DeterPrime(int);

int main(){
	//basic setting
	using namespace std;
	
	int IIN; //int Input Number
	
	//Input Number
	cin >> IIN;
	
	//Create a structure to determine if there is more than one output result.
	int Im = 0;
	
	if (DeterPrime(IIN) == 0){
		cout << "wrong number";
		
		return 0;
	}
	else{

        //set the number of repetitions.
        int IRP = IIN / 2;
		

		
		for(int i = 2; i < IRP; i++){
			
			int IDN1 = IIN / i; //int divisor number 
			int IRN1 = IIN % i; //int remain number
			
			if(IRN1 == 0){
				//Divede by the smallest number, and if the remainder is 0, set the resulting quotient as the upper limit of the number of repetitions.
				IRP = IDN1 -1;
				
				//Determine whether the divisor is a prime number.
				if(DeterPrime(i) + DeterPrime(IDN1) == 0){
					//print result.
					cout << i << " " << IDN1 << endl;
					
					Im = 1;
				}
				
			}
		}	
	}
	
	//When there are no output values.
	if(Im == 0){
		cout << "wrong number";
	}
	
}

//Create a function that determines whether the input number is a prime nuber
int DeterPrime(int a){

	//When determining if a number is prime, only divide n by numbers from 2 to rote n, if any of these divisions result in a whole number, then n is not a prime number.
	int IRP;
	IRP = sqrt(a); 
	
	int IPD =0; //The result indicating whether the input value is a prime number or not.
	for(int i = 2; i <= IRP; i++){
		if( a % i == 0){
			IPD = 1; 
		}
	}
	
	return IPD; //if the input value is a prime number, return 0; otherwise, return 1.
}
