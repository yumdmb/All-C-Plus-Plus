#include<iostream>


int  main()
{
int n1{45};
int n2{60};

std::cout << "n1 is "<< n1 << std:: endl;
std::cout << "n2 is "<< n2 << std:: endl;

std::cout << std::endl; //new line 

std::cout << std::boolalpha;
std::cout << " n1<n2 " << (n1<n2) << std::endl; //parentasie to avoid precedence prob.
std::cout << " n1=n2 " << (n1==n2) << std::endl;
std::cout << std::endl;

bool result=(n1==n2);
std::cout << n1 << " == " << n2 << " : " << result << std::endl;

bool a{true};
bool b {false};
bool c {true};

std::cout << "a && b :" <<(a&&b)<<std::endl;
std::cout << "a || b :" <<(a|b)<<std::endl; // if | only it is 0/1 if || it will be true/false
return 0; 
}               