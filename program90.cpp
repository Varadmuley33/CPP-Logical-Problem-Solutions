////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program90.cpp
//  Description :   Demonstrates object-oriented programming by defining
//                  a class that displays all digits of a
//                  user-entered number one by one.
//  Author :        Varad Nitin Muley
//  Date :          18/11/2025
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
//  Class Name : Digit
//  Description : Provides functionality to display digits of a number
//
/////////////////////////////////////////////////////////////////

class Digit
{
public:
    void DisplayDigits(int iNo)
    {
        int iDigit = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;     // Extract last digit
            cout << iDigit << endl;
            iNo = iNo / 10;        // Remove last digit
        }
    }
};

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;        // Variable to store user input

    cout << "Enter number : " << endl;
    cin >> iValue;         // Accept number from user

    Digit *dobj = new Digit();     // Dynamically create object

    dobj->DisplayDigits(iValue);   // Display digits of number

    // Important
    delete dobj;
    dobj = NULL;

    return 0;
}   // End of main

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : 7521
//  Output :
//  1
//  2
//  5
//  7
//
//  Input : 9
//  Output :
//  9
//
//  Input : 120
//  Output :
//  0
//  2
//  1
//
/////////////////////////////////////////////////////////////////
