#include<iostream>


int  main()
{
auto var {12};
auto var2 {13.0};
auto var3 {14.98f};
auto var4 {16.99l};
auto var5 {'f'};

//int modifier suffixes 
auto var6 {12u};
auto var7 {123ul};
auto var8 {123ll};

std::cout << "var6 is : " << sizeof(var6) << "bytes" << std::endl;


return 0; 
}