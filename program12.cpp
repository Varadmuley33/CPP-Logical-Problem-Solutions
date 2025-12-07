////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program12.cpp
//  Description :   Accepts an integer from the user and checks whether
//                  the number is even or odd.
//  Author :        Varad Nitin Muley
//  Date :          18/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////
//
//  Algorithm
//
/////////////////////////////////////////////////////////////////
/*
    START
        Accept number and store it as No
        Divide No by 2
        If remainder is 0
            Display as Even
        Else
            Display as Odd
    STOP
*/

/////////////////////////////////////////////////////////////////
//
//  Required Header files
//
/////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////
//
//  Function Name :    CheckEvenOdd
//  Description   :    Checks whether the given integer is even or odd.
//  Input         :    Integer
//  Output        :    void
//  Author        :    Varad Nitin Muley
//  Date          :    16/10/2025
//
/////////////////////////////////////////////////////////////////

void CheckEvenOdd(int iNo)
{
    int iRem = 0;

    iRem = iNo % 2;

    if(iRem == 0)
    {
        cout << "Number is even" << endl;
    }
    else
    {
        cout << "Number is odd" << endl;
    }
}

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    cout << "Enter your number : ";
    cin >> iValue;

    CheckEvenOdd(iValue);

    return 0;
}   // End of main

/////////////////////////////////////////////////////////////////
//
//  Testcases:
//
//  Testcase 1:
//  Input  : 10
//  Output : Number is even
//
//  Testcase 2:
//  Input  : 7
//  Output : Number is odd
//
//  Testcase 3:
//  Input  : 0
//  Output : Number is even
//
/////////////////////////////////////////////////////////////////
