/*
    Program to accept a number from user and display below pattern using recursion
    Input :
    6
    Output :
    A    B    C    D    E    F
*/

#include <iostream>
using namespace std;

void Display(int iNo)
{
    static int i = 1;
    static char ch = 'A';

    if (i <= iNo)
    {
        cout << ch << "\t";
        ch++;
        i++;
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
