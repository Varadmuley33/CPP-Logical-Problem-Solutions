////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program15.cpp
//  Description :   Accepts an integer from user and displays whether
//                  the number is Even or Odd using a boolean function.
//  Author :        Varad Nitin Muley
//  Date :          18/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

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
//  Description   :    Checks whether the given integer is even.
//  Input         :    Integer
//  Output        :    Boolean (true if even, false if odd)
//  Author        :    Varad Nitin Muley
//  Date          :    16/10/2025
//
/////////////////////////////////////////////////////////////////

bool CheckEvenOdd(int iNo)
{
    if(iNo % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
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
    bool bRet = false;

    cout << "Enter number : ";
    cin >> iValue;

    bRet = CheckEvenOdd(iValue);

    if(bRet == true)
    {
        cout << iValue << " is Even number" << endl;
    }
    else
    {
        cout << iValue << " is Odd number" << endl;
    }

    return 0;
}   // End of main

/////////////////////////////////////////////////////////////////
//
//  Testcases:
//
//  Testcase 1:
//  Input  : 18
//  Output : 18 is Even number
//
//  Testcase 2:
//  Input  : 7
//  Output : 7 is Odd number
//
//  Testcase 3:
//  Input  : 0
//  Output : 0 is Even number
//
/////////////////////////////////////////////////////////////////
