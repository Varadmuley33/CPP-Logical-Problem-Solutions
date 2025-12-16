////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program61.cpp
//  Description :   Demonstrates digit extraction of a fixed number (7236)
//                  while displaying both the extracted digit and the
//                  updated remaining number after each step.
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

    iDigit = iNo % 10;
    cout << "iDigit is : " << iDigit << endl;
    iNo = iNo / 10;
    cout << "iNo is : " << iNo << endl;

    iDigit = iNo % 10;
    cout << "iDigit is : " << iDigit << endl;
    iNo = iNo / 10;
    cout << "iNo is : " << iNo << endl;

    iDigit = iNo % 10;
    cout << "iDigit is : " << iDigit << endl;
    iNo = iNo / 10;
    cout << "iNo is : " << iNo << endl;

    iDigit = iNo % 10;
    cout << "iDigit is : " << iDigit << endl;
    iNo = iNo / 10;
    cout << "iNo is : " << iNo << endl;

    return 0;
}   // End of main

/////////////////////////////////////////////////////////////////
//
//  Testcase successfully handled by the application
//
//  Input  : None (Static value = 7236)
//  Output : Shows digit extraction and remaining number step-by-step
//
/////////////////////////////////////////////////////////////////
