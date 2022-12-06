#include<iostream>
using namespace std;
int main()
{
    int n1 = 0;
    int n2 = 1;
    int sum = 0;
    while(n2 < 4000000)
     {
    int result = n1 + n2;
    if(result % 2 == 0)
        sum += result;

    n1 = n2;
    n2 = result;
    }
    cout << "resul = " << sum << endl;


}