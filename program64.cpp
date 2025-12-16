////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program64.cpp
//  Description :   Demonstrates the need for iteration by manually extracting
//                  each digit of a number (723614) using repeated modulo and
//                  division operations.
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
    int iNo = 723614;                // Given number
    int iDigit = 0;                 // To extract each digit

    cout << "-----------------------------------------------------" << endl;
    cout << "Original value of iNo is : " << iNo << endl;
    cout << "-----------------------------------------------------" << endl;

    // Extract last digit
    iDigit = iNo % 10;
    cout << "iDigit is : " << iDigit << endl;
    iNo = iNo / 10;
    cout << "iNo is : " << iNo << endl;
    cout << "-----------------------------------------------------" << endl;

    // Extract next digit
    iDigit = iNo % 10;
    cout << "iDigit is : " << iDigit << endl;
    iNo = iNo / 10;
    cout << "iNo is : " << iNo << endl;
    cout << "-----------------------------------------------------" << endl;

    // Extract next digit
    iDigit = iNo % 10;
    cout << "iDigit is : " << iDigit << endl;
    iNo = iNo / 10;
    cout << "iNo is : " << iNo << endl;
    cout << "-----------------------------------------------------" << endl;

    // Extract next digit
    iDigit = iNo % 10;
    cout << "iDigit is : " << iDigit << endl;
    iNo = iNo / 10;
    cout << "iNo is : " << iNo << endl;
    cout << "-----------------------------------------------------" << endl;

    // Extract next digit
    iDigit = iNo % 10;
    cout << "iDigit is : " << iDigit << endl;
    iNo = iNo / 10;
    cout << "iNo is : " << iNo << endl;
    cout << "-----------------------------------------------------" << endl;

    // Extract next digit
    iDigit = iNo % 10;
    cout << "iDigit is : " << iDigit << endl;
    iNo = iNo / 10;
    cout << "iNo is : " << iNo << endl;
    cout << "-----------------------------------------------------" << endl;

    return 0;
}   // End of main

/////////////////////////////////////////////////////////////////
//
//  Note :
//  This program manually repeats the same logic multiple times.
//  It demonstrates *why loops are essential* in programming.
//
//  Without iteration → Code becomes long, repetitive, and error-prone.
//
/////////////////////////////////////////////////////////////////
