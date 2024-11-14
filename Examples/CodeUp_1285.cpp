/*
define: CodeUp problem 1285 my answer
 - source: https://codeup.kr/problem.php?id=1285
date: 24. 11. 14.
*/

#include <iostream>


int main(){
	
	//Basic setting
	int IIN; //Int Input Number.
	int IMN; //Int midle caculation value.
	int IFN; //Int final caculation value.
	
	char CIC; //Char Input Character
	
	
	//Receive an initial value.
	std::cin >> IIN;
	
	IMN = IIN;
	
	//Repeat the program until the user enters '='
	do{
		//Program receive input from the user.
		std::cin >> CIC;
		
		//Perform arithmetic operations based on the input string and store the result in a variable for intermediate value(IMN).
		switch(CIC){
			case '+':
				std::cin >> IIN;
				IMN = IMN + IIN;
				break;
			
			case '-':
				std::cin >> IIN;
				IMN = IMN - IIN;
				break;
			
			case '*':
				std::cin >> IIN;
				IMN = IMN * IIN;
				break;
			
			case '/':
				std::cin >> IIN;
				IMN = IMN / IIN;
				break;
		}
		
	} while( CIC != '='); 
	
	//Display the final result.
	IFN = IMN;
	std::cout << IFN;
}