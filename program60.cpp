////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program60.cpp
//  Description :   Extracts and displays each digit of a fixed four-digit
//                  number (7236) one by one using modulus and division.
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
    int iNo = 7236;               // Predefined number
    int iDigit = 0;              // To store individual digits

    iDigit = iNo % 10;           // Extract last digit
    cout << iDigit;
    iNo = iNo / 10;              // Remove last digit

    iDigit = iNo % 10;           // Next digit
    cout << iDigit;
    iNo = iNo / 10;

    iDigit = iNo % 10;
    cout << iDigit;
    iNo = iNo / 10;

    iDigit = iNo % 10;
    cout << iDigit;
    iNo = iNo / 10;

    return 0;
}   // End of main

/////////////////////////////////////////////////////////////////
//
//  Output : 6327   (Digits printed in reverse order)
//
/////////////////////////////////////////////////////////////////
