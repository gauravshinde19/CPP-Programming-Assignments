/*
    Program to accept a string from user and count number of white spaces using recursion
*/

#include <iostream>
using namespace std;

int WhitSpace(char *str)
{
    static int iCount = 0;

    if (*str != '\0')
    {
        if (*str == ' ')
        {
            iCount++;
        }

        str++;
        WhitSpace(str);
    }

    return iCount;
}

int main()
{
    char arr[50];
    int iRet = 0;

    cout << "Enter the string :" << endl;
    cin.getline(arr, 30);

    iRet = WhitSpace(arr);

    cout << "Number of White spaces in string :" << endl << iRet;

    return 0;
}
