// Generic program to find largest number between three numbers

#include<iostream>
using namespace std;

template <class T>
T Max(T no1, T no2, T no3)
{
    if (no1 > no2 && no1 > no3)
    {
        return no1;
    }
    else if (no2 > no1 && no2 > no3)
    {
        return no2;
    }
    else
    {
        return no3;
    }
}

int main()
{
    int iRet = Max(10, 20, 5);
    printf("Largest number :\n%d\n", iRet);

    float fRet = Max(10.0f, 20.0f, 30.0f);
    printf("Largest number :\n%f\n", fRet);

    return 0;
}
