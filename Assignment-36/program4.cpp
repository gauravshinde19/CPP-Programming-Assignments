/*
    Program to accept a number from user and find the smallest digit of that number using recursion
*/

#include <iostream>
using namespace std;

int Min(int iNo)
{
    int iDigit = 0;
    static int iMin = 9;

    if (iNo != 0)
    {
        iDigit = iNo % 10;
        if (iDigit < iMin)
        {
            iMin = iDigit;
        } 
        iNo = iNo / 10;

        Min(iNo);
    }

    return iMin;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout << "Enter the number :" << endl;
    cin >> iValue;

    iRet = Min(iValue);

    cout << "Smallest digit of " << iValue << " :" << endl << iRet;

    return 0;
}
