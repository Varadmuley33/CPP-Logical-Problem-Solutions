////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program9.cpp
//  Description :   Accepts two floating point numbers from the user and
//                  performs their addition after converting negative
//                  values into positive form.
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
//  Description   :    Converts negative float values to positive and
//                     returns their addition.
//
/////////////////////////////////////////////////////////////////

float AdditionTwoNumbers(float fNo1, float fNo2)
{
    if(fNo1 < 0.0f)
    {
        fNo1 = -fNo1;        // Convert to positive
    }

    if(fNo2 < 0.0f)
    {
        fNo2 = -fNo2;        // Convert to positive
    }

    float fSum = fNo1 + fNo2;    // Business logic
    return fSum;                 // Return result
}

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{
    float fValue1 = 0.0f, fValue2 = 0.0f;   // User input variables
    float fRet = 0.0f;                      // Variable to store result

    cout << "Enter first number : " << endl;
    cin >> fValue1;

    cout << "Enter second number : " << endl;
    cin >> fValue2;

    fRet = AdditionTwoNumbers(fValue1, fValue2);   // Call user-defined function

    cout << "Addition is : " << fRet << endl;      // Display output

    return 0;
}   // End of main

/////////////////////////////////////////////////////////////////
//
//  Testcases:
//
//  Testcase 1:
//  Input  : -5.5   -4.5
//  Output : Addition is : 10
//
//  Testcase 2:
//  Input  : -3.0   7.0
//  Output : Addition is : 10
//
//  Testcase 3:
//  Input  : 2.5   3.5
//  Output : Addition is : 6
//
/////////////////////////////////////////////////////////////////
