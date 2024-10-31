/*
define: my code of problem 1278 in codeup
date: 2022. 10. 28.
*/

#include <string>
#include <iostream>

int main(void){
    
    int IIV; //IIV is Int type Input Value.
    std::string SIV; //SIV is String Input Value.
    
    //input IIV.
    std::cin >> IIV;
    
    SIV = std::to_string(IIV); //SIV is String Input Value. change value type( int -> string). and assign to SIV.
    
    //count charaters. and save.
    
    //ICN is Int type count Number.
    int ICN = SIV.length();
    
    //output ICN.
    std::cout << ICN;
    
    
    return 0;
}
