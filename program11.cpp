////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program11.cpp
//  Description :   Performs addition of two floating point numbers
//                  after converting negative inputs into positive.
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
//  Description   :    Returns the addition result after converting
//                     negative values into their positive form.
//  Input         :    Float, Float
//  Output        :    Float
//  Author        :    Varad Nitin Muley
//  Date          :    16/10/2025
//
/////////////////////////////////////////////////////////////////

float AdditionTwoNumbers(
                            float fNo1,    // First input
                            float fNo2     // Second input
                        )
{
    float fSum = 0.0f;                    // To store the result

    if(fNo1 < 0.0f)
    {
        fNo1 = -fNo1;                     // Convert to positive
    }

    if(fNo2 < 0.0f)
    {
        fNo2 = -fNo2;                     // Convert to positive
    }

    fSum = fNo1 + fNo2;                   // Business Logic
    
    return fSum;
}   // End of AdditionTwoNumbers

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{
    float fValue1 = 0.0f, fValue2 = 0.0f;    // To accept user input
    float fRet = 0.0f;                       // To store the result

    cout << "Enter first number : " << endl;
    cin >> fValue1;

    cout << "Enter second number : " << endl;
    cin >> fValue2;
    
    fRet = AdditionTwoNumbers(fValue1, fValue2);   // Method call

    cout << "Addition is : " << fRet << endl;

    return 0;
}   // End of main

/////////////////////////////////////////////////////////////////
//
//  Testcases:
//
//  Testcase 1:
//  Input  : -10.5    3.2
//  Output : Addition is : 13.7
//
//  Testcase 2:
//  Input  : 6.5    3.5
//  Output : Addition is : 10
//
//  Testcase 3:
//  Input  : -4.0    -6.0
//  Output : Addition is : 10
//
/////////////////////////////////////////////////////////////////


