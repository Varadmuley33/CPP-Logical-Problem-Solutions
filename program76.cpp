////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program76.cpp
//  Description :   Displays all factors of a user-entered number using
//                  an iterative loop up to half of the number.
//                  Original logic and flow are preserved.
//  Author :        Varad Nitin Muley
//  Date :          23/11/2025
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
    int iNo = 0;        // Variable to store user input
    int i = 0;          // Loop counter

    cout << "Enter number : " << endl;
    cin >> iNo;         // Accept number from user

    for(i = 1; i <= (iNo / 2); i++)    // Loop till half of the number
    {
        if((iNo % i) == 0)             // Check whether 'i' is a factor
        {
            cout << i << endl;         // Display factor
        }
    }

    return 0;
}   // End of main

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : 12
//  Output : 1 2 3 4 6
//
//  Input : 21
//  Output : 1 3 7
//
//  Input : 7
//  Output : 1
//
/////////////////////////////////////////////////////////////////
