/*
    Program to display below pattern using recursion
    A    B    C    D    E    F
*/

#include <iostream>
using namespace std;

void Display()
{
    static char ch = 'A';

    if (ch <= 'F')
    {
        cout << ch << "\t";
        ch++;
        Display();
    }
}

int main()
{
    Display();

    return 0;
}
