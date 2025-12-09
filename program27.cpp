////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program27.cpp
//  Description :   Demonstrates dynamic message printing with validation
//                  by accepting frequency from the user and applying a
//                  filter for negative input.
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
//  Function Name :    Display
//  Description   :    Prints "Jay Ganesh..." iFrequency times
//                     Handles negative input using filter logic
//  Input         :    Integer
//  Output        :    void
//
/////////////////////////////////////////////////////////////////

void Display(int iFrequency)
{
    int iCnt = 0;                                      // Loop counter

    // Filter for invalid input
    if(iFrequency < 0)
    {
        cout << "Invalid input" << endl;
        return;
    }

    for(iCnt = 1; iCnt <= iFrequency; iCnt++)
    {
        cout << "Jay Ganesh..." << endl;               // Repeated message
    }
}

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{
    int iCount = 0;

    cout << "Enter the frequency : " << endl;
    cin >> iCount;

    Display(iCount);                                   // Function call

    return 0;
}   // End of main

/////////////////////////////////////////////////////////////////
//
//  Testcases:
//
//  Testcase 1:
//  Input  : 4
//  Output : Jay Ganesh... (4 times)
//
//  Testcase 2:
//  Input  : -3
//  Output : Invalid input
//
//  Testcase 3:
//  Input  : 0
//  Output : (No output)
//
//  Testcase 4:
//  Input  : 2
//  Output : Jay Ganesh... (2 times)
//
/////////////////////////////////////////////////////////////////
