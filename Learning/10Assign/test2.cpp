#include<iostream>


int  main()
{
int var1{123};
std::cout << "var1 :" << var1 << std::endl;

var1=55; //Assign 
std::cout << "var1 :" << var1 << std::endl;

std::cout << std::endl;

std::cout << "---------------" << std::endl;

double  var2 {44.55}; //Declare and initialize
std::cout << "var2 :" << var2 << std::endl;

std::cout << std::endl;

std::cout << "---------------" << std::endl;

std::cout << std::endl;
bool state(false);
std::cout << std::boolalpha;
std::cout << "state : " << state << std::endl;

state=true;
std::cout << "state: " << state << std::endl;

 
return 0; 
}