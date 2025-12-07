////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program20.cpp
//  Description :   Demonstrates a simple program to find the maximum
//                  of two user-entered integers using a function.
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
//  Function Name :    Maximum
//  Description   :    Returns the larger number between two integers
//  Input         :    Integer, Integer
//  Output        :    Integer
//
/////////////////////////////////////////////////////////////////

int Maximum(int iNo1, int iNo2)
{
    if(iNo1 > iNo2)                  // Comparison logic
    {
        return iNo1;
    }
    else
    {
        return iNo2;
    }
}

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;
    int iRet = 0;

    cout << "Enter first number : ";
    cin >> iValue1;

    cout << "Enter second number : ";
    cin >> iValue2;

    iRet = Maximum(iValue1, iValue2);    // Function call

    cout << "Largest number is : " << iRet << endl;

    return 0;
}   // End of main

/////////////////////////////////////////////////////////////////
//
//  Testcases:
//
//  Testcase 1:
//  Input  : 10   20
//  Output : Largest number is : 20
//
//  Testcase 2:
//  Input  : -5   -2
//  Output : Largest number is : -2
//
//  Testcase 3:
//  Input  : 7   7
//  Output : Largest number is : 7
//
/////////////////////////////////////////////////////////////////
