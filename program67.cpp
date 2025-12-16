////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program67.cpp
//  Description :   Displays each digit of the given number using iterative
//                  division and modulus operations.
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
//  Function Name : DisplayDigits
//  Description :   Extracts and displays digits of the number
//                  one by one using iteration.
//  Input :         Integer
//  Output :        None
//
/////////////////////////////////////////////////////////////////

void DisplayDigits(int iNo)
{
    int iDigit = 0;             // To store extracted digit

    cout << "-----------------------------------------------------" << endl;
    cout << "Original value of iNo is : " << iNo << endl;

    // Iterate until all digits are processed
    while(iNo != 0)
    {
        cout << "-----------------------------------------------------" << endl;

        iDigit = iNo % 10;      // Extract last digit
        cout << "iDigit is : " << iDigit << endl;

        iNo = iNo / 10;         // Remove last digit
        cout << "iNo is : " << iNo << endl;
    }

    cout << "-----------------------------------------------------" << endl;
}

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    cout << "Enter the number : ";
    cin >> iValue;

    DisplayDigits(iValue);      // Function call

    return 0;
}   // End of main

/////////////////////////////////////////////////////////////////
//
//  Note : This program demonstrates digit extraction using
//         iteration. Each step prints intermediate results.
//
//  Time Complexity : O(N)   (N = number of digits)
//
/////////////////////////////////////////////////////////////////
