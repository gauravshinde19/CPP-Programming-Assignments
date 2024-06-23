// Program to accept number from user and check whether 7th, 8th and 9th bits are ON or OFF

#include <iostream>
using namespace std;

bool ChkBit(int iNo)
{
    unsigned int iMask = 0X000001c0;
    int iResult = 0;

    iResult = iNo & iMask;
    if (iResult == iMask)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    unsigned int iValue = 0;
    bool bRet = false;

    cout << "Enter the number :" << endl;
    cin >> iValue;

    bRet = ChkBit(iValue);

    if (bRet == true)
    {
        cout << "7th, 8th and 9th bits are ON" << endl;
    }
    else
    {
        cout << "7th, 8th and 9th bits are OFF" << endl;
    }
    
    return 0;
}
