////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program23.cpp
//  Description :   Demonstrates how to reverse a user-entered integer
//                  using a loop and modulo operation in C.
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
//  Function Name :    Reverse
//  Description   :    Returns the reverse of a given integer
//  Input         :    Integer
//  Output        :    Integer
//
/////////////////////////////////////////////////////////////////

int Reverse(int iNo)
{
    int iDigit = 0, iRev = 0;

    if(iNo < 0)
    {
        iNo = -iNo;                     // Updator for negative numbers
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;              // Extract last digit
        iRev = (iRev * 10) + iDigit;    // Build reverse number
        iNo = iNo / 10;                 // Remove last digit
    }

    return iRev;
}

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0, iRet = 0;

    cout << "Enter number : ";
    cin >> iValue;

    iRet = Reverse(iValue);             // Function call

    cout << "Reverse number is : " << iRet << endl;

    return 0;
}   // End of main

/////////////////////////////////////////////////////////////////
//
//  Testcases:
//
//  Testcase 1:
//  Input  : 7531
//  Output : Reverse number is : 1357
//
//  Testcase 2:
//  Input  : -980
//  Output : Reverse number is : 89
//
//  Testcase 3:
//  Input  : 5
//  Output : Reverse number is : 5
//
/////////////////////////////////////////////////////////////////
