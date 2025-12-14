////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program46.cpp
//  Description :   Demonstrates the wrong approach to display factors of
//                  a number by manually checking each possible divisor.
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
//  Description :   Prints factors of iNo using multiple if conditions
//                  (Not an efficient approach)
//
//  Input :         Integer
//  Output :        void
//
/////////////////////////////////////////////////////////////////

void DisplayFactors(int iNo)
{
    // Checking divisibility manually (wrong approach)
    if((iNo % 1) == 0)
    {
        cout << "1\n";
    }
    if((iNo % 2) == 0)
    {
        cout << "2\n";
    }
    if((iNo % 3) == 0)
    {
        cout << "3\n";
    }
    if((iNo % 4) == 0)
    {
        cout << "4\n";
    }
    if((iNo % 5) == 0)
    {
        cout << "5\n";
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

    DisplayFactors(iValue);                // Function call

    return 0;
}   // End of main

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : 6
//  Output : 1  2  3  (4 and 5 are skipped because they are not factors)
//
//  Input : 10
//  Output : 1  2  5
//
//  Input : 12
//  Output : 1  2  3  4
//
/////////////////////////////////////////////////////////////////
