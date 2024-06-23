/*
    Program to accept a number from user and find the summation of its digits using recursion
*/

#include <iostream>
using namespace std;

int Sum(int iNo)
{
    int iDigit = 0;
    static int iSum = 0;

    if (iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iNo = iNo / 10;

        Sum(iNo);
    }

    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout << "Enter the number :" << endl;
    cin >> iValue;

    iRet = Sum(iValue);

    cout << "Summation of digits of " << iValue << " :" << endl << iRet;

    return 0;
}
