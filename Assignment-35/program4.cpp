/*
    Program to accept a number from user and find the factorial of that number using recursion
*/

#include <iostream>
using namespace std;

int Fact(int iNo)
{
    static long unsigned int iFact = 1;

    if (iNo >= 1)
    {
        iFact = iFact * iNo;
        iNo--;
        Fact(iNo);
    }
    
    return iFact;
}

int main()
{
    int iValue = 0;
    long unsigned int iRet = 0;

    cout << "Enter the number :" << endl;
    cin >> iValue;

    iRet = Fact(iValue);

    cout << "Factorail of " << iValue << " :" << endl << iRet;

    return 0;
}
