////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program66.cpp
//  Description :   Demonstrates digit extraction using iteration. The program
//                  accepts a number from the user and prints each digit along
//                  with the updated value of the number after removing digits.
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
    int iNo = 0;                     // Number entered by user
    int iDigit = 0;                  // Extracted digit

    cout << "Enter the number : ";
    cin >> iNo;

    cout << "-----------------------------------------------------" << endl;
    cout << "Original value of iNo is : " << iNo << endl;

    // Iteratively extract digits until the number becomes zero
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
//  This program demonstrates the need of iteration for repetitive
//  operations like digit extraction.
//
//  Time Complexity : O(N)   (N = number of digits)
//
/////////////////////////////////////////////////////////////////
