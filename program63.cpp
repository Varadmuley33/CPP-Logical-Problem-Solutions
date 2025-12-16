////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program63.cpp
//  Description :   Extracts digits of a six-digit number (723614) step-by-step
//                  and displays each extracted digit along with updated value.
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
    int iNo = 723614;                 // Predefined 6-digit number
    int iDigit = 0;                  // To store extracted digit

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

    // Continue if you want full digit extraction (but user gave only 4 steps)
    // iDigit = iNo % 10;

    return 0;
}   // End of main

/////////////////////////////////////////////////////////////////
//
//  Testcase successfully handled by the application
//
//  Input  : None (static number = 723614)
//  Output : Digit extraction with updated values printed step-by-step
//
/////////////////////////////////////////////////////////////////
