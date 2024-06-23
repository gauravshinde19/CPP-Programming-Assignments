/*
    Program to accept a string from user and count number of small characters using recursion
*/

#include <iostream>
using namespace std;

int WhitSpace(char *str)
{
    static int iCount = 0;

    if (*str != '\0')
    {
        if (*str >= 'a' && *str <= 'z')
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

    cout << "Number of small characters in string :" << endl << iRet;

    return 0;
}
