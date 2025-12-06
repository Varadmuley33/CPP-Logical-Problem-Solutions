////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program6.cpp
//  Description :   Accepts two integers from the user, performs addition
//                  using a user-defined function, and displays the result.
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
//  Function Name :     Add
//  Description   :     Performs addition of two integers
//
/////////////////////////////////////////////////////////////////

int Add(int A, int B)
{
    int sum = 0;
    sum = A + B;        // Business logic
    return sum;         // Return the result
}

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{
    int i = 0, j = 0;   // Variables to store user inputs
    int ans = 0;        // Variable to store the result

    cout << "Enter first number : ";
    cin >> i;           // Accept first input

    cout << "Enter second number : ";
    cin >> j;           // Accept second input

    ans = Add(i, j);    // Call user-defined function

    cout << "Addition is : " << ans << endl;   // Display result

    return 0;
}   // End of main

/////////////////////////////////////////////////////////////////
//
//  Testcases:
//
//  Testcase 1:
//  Input  : 10  20
//  Output : Addition is : 30
//
//  Testcase 2:
//  Input  : -5  12
//  Output : Addition is : 7
//
//  Testcase 3:
//  Input  : 100  250
//  Output : Addition is : 350
//
/////////////////////////////////////////////////////////////////
