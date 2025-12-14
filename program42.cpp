////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program42.cpp
//  Description :   Displays even numbers from 1 to the user-entered limit
//                  using conditional checking inside a loop.
//  Author :        Varad Nitin Muley
//  Date :          21/11/2025
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
//  Function Name : Display
//  Description :   Prints even numbers from 1 to iNo using % operator
//  Input :         Integer
//  Output :        void
//
/////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;                           // Loop counter

    // This loop checks each number and prints only if it is even.
    // Use this method when increment is not constant (refer Program40 for shorthand logic).
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) == 0)                 // Condition to check even number
        {
            cout << iCnt << "\t";           // Print even number
        }
    }
}

// Time Complexity : O(N)

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    cout << "Enter the Frequency : \n";
    cin >> iValue;

    Display(iValue);                        // Function call

    return 0;
}   // End of main

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : 10
//  Output : 2   4   6   8   10
//
//  Input : 7
//  Output : 2   4   6
//
//  Input : 1
//  Output : (no output)
//
//  Input : 2
//  Output : 2
//
/////////////////////////////////////////////////////////////////
