#include<iostream>

int addNumbers( int first_param , int second_param)
   {
    int result=first_param+second_param;
    return result;
   }
int  main()
{
    int n1 {13};
    int n2 {7};

    std::cout << "First : " << n1 << std::endl; //13
    std::cout << "Second : " << n2 << std::endl; //7

    int sum=n1+n2;
    std::cout << "Sum : " << sum << std::endl; //20

    sum = addNumbers(25,7);
    std::cout << "Sum : " << sum << std::endl; //32

    std::cout << "Sum : " << addNumbers(31,44) << std::endl;
    return 0;
}