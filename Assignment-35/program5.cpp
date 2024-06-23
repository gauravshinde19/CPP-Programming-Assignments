/*
    Program to accept a number from user and find the product of digits of that number using recursion
*/

#include <iostream>
using namespace std;

int Mult(int iNo)
{
    int iDigit = 0;
    static int iMul = 1;

    if (iNo != 0)
    {
        iDigit = iNo % 10;
        iMul = iMul * iDigit;
        iNo = iNo / 10;

        Mult(iNo);
    }

    return iMul;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout << "Enter the number :" << endl;
    cin >> iValue;

    iRet = Mult(iValue);

    cout << "Product of digits of " << iValue << " :" << endl << iRet;

    return 0;
}
