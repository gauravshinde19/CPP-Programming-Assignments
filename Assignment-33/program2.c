/*
    Program to display below pattern using recursion
    1    2    3    4    5
*/

#include <iostream>
using namespace std;

void Display()
{
    static int i = 1;

    if (i <= 5)
    {
        cout << i << "\t";
        i++;
        Display();
    }
}

int main()
{
    Display();

    return 0;
}
