/*
    Program to accept a string from user and find number of characters using recursion
*/

#include <iostream>
using namespace std;

int strlen(char *str)
{
    static int iCount = 0;

    if (*str != '\0')
    {
        iCount++;
        str++;
        strlen(str);
    }

    return iCount;  
}

int main()
{
    char arr[50];
    int iRet = 0;

    cout << "Enter the string :" << endl;
    cin.getline(arr, 30);

    iRet = strlen(arr);

    cout << "Number of characters in string :" << endl << iRet;

    return 0;
}
