////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program5.cpp
//  Description :   Accepts two integers from the user and performs
//                  addition, then displays the result.
//  Author :        Varad Nitin Muley
//  Date :          18/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////
//
//  Required Header files
//
/////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{
    int i = 0, j = 0;   // Variables to store user input
    int ans = 0;        // Variable to hold the result

    cout << "Enter first number : ";
    cin >> i;           // Accept first number from user

    cout << "Enter second number : ";
    cin >> j;           // Accept second number from user

    ans = i + j;        // Business logic: Perform addition

    cout << "Addition is : " << ans << endl;   // Display output

    return 0;
}   // End of main

/////////////////////////////////////////////////////////////////
//
//  Testcases:
//
//  Testcase 1:
//  Input  : 10  15
//  Output : Addition is : 25
//
//  Testcase 2:
//  Input  : -5  20
//  Output : Addition is : 15
//
//  Testcase 3:
//  Input  : 100  200
//  Output : Addition is : 300
//
/////////////////////////////////////////////////////////////////
