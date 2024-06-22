/*
    Program to accept a number from user and display below pattern using recursion
    Input :
    6
    Output :
    a    b    c    d    e    f
*/

#include <iostream>
using namespace std;

void Display(int iNo)
{
    static int i = 1;
    static char ch = 'a';

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
