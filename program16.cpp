////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program16.cpp
//  Description :   Accepts an integer from user and determines whether
//                  the number is Even or Odd using boolean logic.
//  Author :        Varad Nitin Muley
//  Date :          18/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////
//
// Required Header files
//
/////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////
//
//  Function Name :    CheckEvenOdd
//  Description   :    It is used to check whether the given number is
//                     even or odd and returns boolean result.
//  Input         :    Integer
//  Output        :    Boolean
//  Author        :    Varad Nitin Muley
//  Date          :    16/10/2025
//
/////////////////////////////////////////////////////////////

bool CheckEvenOdd(int iNo)
{
    int iRem = 0;
    iRem = iNo % 2;

    if(iRem == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

/////////////////////////////////////////////////////////////
//
//  Entry point function of the application
//  
/////////////////////////////////////////////////////////////

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
//  Input  : 24
//  Output : 24 is Even number
//
//  Testcase 2:
//  Input  : 13
//  Output : 13 is Odd number
//
//  Testcase 3:
//  Input  : 0
//  Output : 0 is Even number
//
/////////////////////////////////////////////////////////////////
