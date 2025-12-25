////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program91.cpp
//  Description :   Demonstrates object-oriented programming by defining
//                  a class that calculates the sum of digits of a
//                  user-entered number.
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
//  Description : Provides functionality to calculate sum of digits
//
/////////////////////////////////////////////////////////////////

class Digit
{
public:
    int SumDigits(int iNo)
    {
        int iDigit = 0;
        int iSum = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;     // Extract last digit
            iSum = iSum + iDigit; // Add digit to sum
            iNo = iNo / 10;        // Remove last digit
        }

        return iSum;
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
    int iRet = 0;          // Variable to store result

    cout << "Enter number : " << endl;
    cin >> iValue;         // Accept number from user

    Digit *dobj = new Digit();     // Dynamically create object

    iRet = dobj->SumDigits(iValue);

    cout << "Addition of digits is : " << iRet << endl;

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
//  Output : Addition of digits is : 15
//
//  Input : 9
//  Output : Addition of digits is : 9
//
//  Input : 120
//  Output : Addition of digits is : 3
//
/////////////////////////////////////////////////////////////////
