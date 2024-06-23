/*
    Program to accept a number from user and return its reverse number using recursion
*/

#include <iostream>
using namespace std;

int Reverse(int iNo, int rev = 0)
{
    if (iNo == 0)
    {
        return rev;
    }
    int iDigit = iNo % 10;
    rev = rev * 10 + iDigit;
    return Reverse(iNo / 10, rev);
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout << "Enter the number :" << endl;
    cin >> iValue;

    iRet = Reverse(iValue);

    cout << "Reverse number :" << endl << iRet;

    return 0;
}
