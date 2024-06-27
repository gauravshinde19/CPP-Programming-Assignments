// Program to accept one integer and range as input and toggle all the bits in that range

#include <iostream>
using namespace std;
#include <stdlib.h>

typedef unsigned int UINT;

UINT ToggleBitRange(UINT iNo, int iLow, int iUp)
{
    int iDiff = 0, iCnt = 0, iPos = 0;
    int *iMask;
    int iMask1 = 0X00000001;
    int iMask2 = 0;
    UINT iResult = 0;

    if ((iLow < 0) || (iUp > 32))
    {
        return -1;
    }
    if (iUp > iLow)
    {
        iDiff = iUp - iLow;
        iPos = iLow;
    }
    else
    {
        iDiff = iLow - iUp;
        iPos = iUp;
    }
    iDiff++;

    iMask = (int *)malloc(sizeof(int) * iDiff);

    for (iCnt = 0; iCnt < iDiff; iCnt++, iLow++)
    {
        iMask1 = 0X00000001;
        iMask[iCnt] = iMask1 << iLow - 1;
        iMask2 = iMask2 | iMask[iCnt];
    }

    iResult = iNo ^ iMask2;

    return iResult;
}

int main()
{
    UINT iValue = 0;
    int iStart = 0;
    int iEnd = 0;
    UINT iRet = 0;

    cout << "Enter the number :" << endl;
    cin >> iValue;

    cout << "Enter the starting number of range:" << endl;
    cin >> iStart;

    cout << "Enter the ending number of range:" << endl;
    cin >> iEnd;

    iRet = ToggleBitRange(iValue, iStart, iEnd);

    if (iRet == -1)
    {
        cout << "Invalid Range" << endl;
    }
    else
    {
        cout << "Modified Number:" << endl << iRet;
    }

    return 0;
}
