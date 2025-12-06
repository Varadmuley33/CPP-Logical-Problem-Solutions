////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program7.cpp
//  Description :   Accepts two integers from the user and returns their
//                  addition using a user-defined function.
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
//  Function Name :    AdditionTwoNumbers
//  Description :      Performs addition of two integers and returns
//                     the result.
//
/////////////////////////////////////////////////////////////////

int AdditionTwoNumbers(int iNo1, int iNo2)
{
    int sum = 0;                // Variable to store the sum
    sum = iNo1 + iNo2;          // Business logic
    return sum;                 // Return the result
}

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{ 
    int iValue1 = 0, iValue2 = 0;   // Variables to store user input
    int iRet = 0;                   // Variable to store result

    cout << "Enter first number : ";
    cin >> iValue1;                 // Accept first number

    cout << "Enter second number : ";
    cin >> iValue2;                 // Accept second number

    iRet = AdditionTwoNumbers(iValue1, iValue2);   // Call user-defined function

    cout << "Addition is : " << iRet << endl;      // Display output
    
    return 0;
}   // End of main

/////////////////////////////////////////////////////////////////
//
//  Testcases:
//
//  Testcase 1:
//  Input  : 5   10
//  Output : Addition is : 15
//
//  Testcase 2:
//  Input  : -10   20
//  Output : Addition is : 10
//
//  Testcase 3:
//  Input  : 0   0
//  Output : Addition is : 0
//
/////////////////////////////////////////////////////////////////
