////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program65.cpp
//  Description :   Demonstrates the use of iteration to extract digits from a
//                  number (723614) using modulo and division inside a loop.
//  Author :        Varad Nitin Muley
//  Date :          22/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////
//
//  Required Header files
//
/////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{
    int iNo = 723614;                // Input number
    int iDigit = 0;                 // Extracted digit

    cout << "-----------------------------------------------------" << endl;
    cout << "Original value of iNo is : " << iNo << endl;

    // Loop continues until the number becomes 0
    while(iNo != 0)
    {
        cout << "-----------------------------------------------------" << endl;

        iDigit = iNo % 10;           // Extract last digit
        cout << "iDigit is : " << iDigit << endl;

        iNo = iNo / 10;              // Remove last digit
        cout << "iNo is : " << iNo << endl;
    }

    cout << "-----------------------------------------------------" << endl;

    return 0;
}   // End of main

/////////////////////////////////////////////////////////////////
//
//  Note :
//  This program shows how iteration (looping) simplifies repeated
//  operations, unlike manually writing multiple repeated steps.
//
//  Time Complexity : O(N) where N = number of digits.
//
/////////////////////////////////////////////////////////////////
