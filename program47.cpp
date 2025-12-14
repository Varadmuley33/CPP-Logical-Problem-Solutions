////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program47.cpp
//  Description :   Displays all factors of a user-entered number using
//                  an efficient loop-based approach.
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
//  Function Name : DisplayFactors
//  Description :   Prints all factors of iNo using a loop
//  Input :         Integer
//  Output :        void
//
/////////////////////////////////////////////////////////////////

void DisplayFactors(int iNo)
{
    int iCnt = 0;                           // Loop counter

    for(iCnt = 1; iCnt < iNo; iCnt++)       // Check from 1 to (iNo - 1)
    {
        if((iNo % iCnt) == 0)               // Factor condition
        {
            cout << iCnt << "\n";           // Print factor
        }
    }
}

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    cout << "Enter Number : ";
    cin >> iValue;

    DisplayFactors(iValue);                 // Function call

    return 0;
}   // End of main

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : 6
//  Output : 1  2  3
//
//  Input : 12
//  Output : 1  2  3  4  6
//
//  Input : 10
//  Output : 1  2  5
//
/////////////////////////////////////////////////////////////////
