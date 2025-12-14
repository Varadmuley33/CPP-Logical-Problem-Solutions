////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program48.cpp
//  Description :   Accepts a number from the user (handles negative input)
//                  and displays all its factors using a loop.
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
//  Description :   Prints factors of iNo after converting negative
//                  input to positive.
//  Input :         Integer
//  Output :        void
//
/////////////////////////////////////////////////////////////////

void DisplayFactors(int iNo)
{
    int iCnt = 0;

    // Updator: Convert negative number to positive
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    // Display all factors from 1 to iNo - 1
    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)           // Factor condition
        {
            cout << iCnt << "\n";
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

    DisplayFactors(iValue);

    return 0;
}   // End of main

/////////////////////////////////////////////////////////////////
//
//  Time Complexity : O(N)
//
/////////////////////////////////////////////////////////////////
