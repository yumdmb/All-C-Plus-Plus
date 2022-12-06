#include<iostream>
#include <iomanip> // for precision

int  main()

{

    /*

signed long long int value1{2}; // unasgined is for positive only // signed can be used for neg/pos

// long long is 8 bit // long is 4 bit //short is 2 bit

std::cout << "size of int: " << sizeof(value1) << std::endl;
    */


   double n10{5.6};
   double n11{}; //precision 15
   float n1 {1.1234567890f}; //for float //precision is 7
   long double n3 {1.1234567890L}; //for long double or else it will become  double

   std::cout << "size of float : " << sizeof(float) << std::endl;
   std::cout << "size of long double : " << sizeof(long double) << std::endl;
   std::cout << "size ofdouble : " << sizeof(double) << std::endl;

   //Precision 
std::cout << std::setprecision(5);
std::cout << " jumber10 is : " << n10 << std::endl;
std::cout << " jumber1 is : " << n1 << std::endl;
std::cout << " jumber3 is : " << n3 << std::endl;


    return 0; 
} 