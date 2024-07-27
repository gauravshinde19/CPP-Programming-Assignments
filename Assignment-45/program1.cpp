// Generic program to accept one value and one number from user and print that value that number of times on screen

#include<iostream>
using namespace std;

template <class T>
void Display(T Value, int No)
{
    int i = 0;

    printf("Result :\n");
    for (i = 1; i <= No; i++)
    {
        cout << Value <<"\t";
    }
}

int main()
{
    int iValue = 0;
    int iNo = 0; 
    float fValue = 0.0f;
    char cValue = '\0';

    printf("Enter the integer value :\n");
    scanf("%d", &iValue);

    printf("Enter the number of times you want to display :\n");
    scanf("%d", &iNo);

    Display(iValue, iNo);

    printf("\nEnter the float value :\n");
    scanf(" %f", &fValue);

    printf("Enter the number of times you want to display :\n");
    scanf("%d", &iNo);

    Display(fValue, iNo);

    printf("\nEnter the character value :\n");
    scanf(" %c", &cValue);

    printf("Enter the number of times you want to display :\n");
    scanf("%d", &iNo);

    Display(cValue, iNo);

    return 0;
}
