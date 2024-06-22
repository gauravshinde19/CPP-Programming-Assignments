/*
    Program to accept a number from user and display below pattern using recursion
    Input :
    5
    Output :
    5    4    3    2    1
*/

#include <iostream>
using namespace std;

void Display(int iNo)
{
    if (iNo >= 1)
    {
        cout << iNo << "\t";
        iNo--;
        Display(iNo);
    }
}

int main()
{
    int iValue = 0;

    cout << "Enter the number :" << endl;
    cin >> iValue;

    Display(iValue);

    return 0;
}
