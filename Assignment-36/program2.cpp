/*
    Program to accept a number from user and find the largest digit of that number using recursion
*/

#include <iostream>
using namespace std;

int Max(int iNo)
{
    int iDigit = 0;
    static int iMax = 0;

    if (iNo != 0)
    {
        iDigit = iNo % 10;
        if (iDigit > iMax)
        {
            iMax = iDigit;
        } 
        iNo = iNo / 10;

        Max(iNo);
    }

    return iMax;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout << "Enter the number :" << endl;
    cin >> iValue;

    iRet = Max(iValue);

    cout << "Largest digit of " << iValue << " :" << endl << iRet;

    return 0;
}
