////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program51.cpp
//  Description :   Extracts digits of a predefined number one by one
//                  using modulus and division operations.
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
    int iNo = 7236;                 // Predefined number
    int iDigit = 0;                // To store extracted digit

    iDigit = iNo % 10;             // Extract last digit
    cout << iDigit << endl;
    iNo = iNo / 10;                // Remove last digit

    iDigit = iNo % 10;
    cout << iDigit << endl;
    iNo = iNo / 10;

    iDigit = iNo % 10;
    cout << iDigit << endl;
    iNo = iNo / 10;

    iDigit = iNo % 10;
    cout << iDigit << endl;
    iNo = iNo / 10;

    return 0;
}   // End of main

/////////////////////////////////////////////////////////////////
//
//  Testcase successfully handled by the application
//
//  Input  : None (Static value = 7236)
//  Output : 6
//           3
//           2
//           7
//
/////////////////////////////////////////////////////////////////
