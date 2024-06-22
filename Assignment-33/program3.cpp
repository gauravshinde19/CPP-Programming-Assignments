/*
    Program to display below pattern using recursion
    5    4    3    2    1
*/

#include <iostream>
using namespace std;

void Display()
{
    static int i = 5;

    if (i >= 1)
    {
        cout << i << "\t";
        i--;
        Display();
    }
}

int main()
{
    Display();

    return 0;
}
