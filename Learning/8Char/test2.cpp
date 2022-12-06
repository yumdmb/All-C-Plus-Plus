#include<iostream>


int  main()
{

char c1 {'a'};
char c2 {'r'};
char c3 {'r'};
char c4 {'o'};
char c5 {'w'};

std::cout << c1 << std::endl;
std::cout << c2 << std::endl;
std::cout << c3 << std::endl;
std::cout << c4 << std::endl;
std::cout << c5 << std::endl;

char val = 65 ; // SCII char code for A
std::cout << "value: " << val << std::endl; //A
std::cout << "value(int): " << static_cast<int>(val) << std::endl; //65

return 0; 
}