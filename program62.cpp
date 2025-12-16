////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program62.cpp
//  Description :   Demonstrates digit extraction of a fixed number (7236)
//                  and displays the intermediate value after each step
//                  with clear separators for readability.
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
    int iNo = 7236;                   // Predefined number
    int iDigit = 0;                  // To store extracted digits

    cout << "-----------------------------------------------------" << endl;
    cout << "Original value of iNo is : " << iNo << endl;
    cout << "-----------------------------------------------------" << endl;

    iDigit = iNo % 10;
    cout << "iDigit is : " << iDigit << endl;
    iNo = iNo / 10;
    cout << "iNo is : " << iNo << endl;

    cout << "-----------------------------------------------------" << endl;

    iDigit = iNo % 10;
    cout << "iDigit is : " << iDigit << endl;
    iNo = iNo / 10;
    cout << "iNo is : " << iNo << endl;

    cout << "-----------------------------------------------------" << endl;

    iDigit = iNo % 10;
    cout << "iDigit is : " << iDigit << endl;
    iNo = iNo / 10;
    cout << "iNo is : " << iNo << endl;

    cout << "-----------------------------------------------------" << endl;

    iDigit = iNo % 10;
    cout << "iDigit is : " << iDigit << endl;
    iNo = iNo / 10;
    cout << "iNo is : " << iNo << endl;

    cout << "-----------------------------------------------------" << endl;

    return 0;
}   // End of main

/////////////////////////////////////////////////////////////////
//
//  Testcase successfully handled by the application
//
//  Input  : None (Static value = 7236)
//  Output : Shows digit extraction process with separators
//
/////////////////////////////////////////////////////////////////
