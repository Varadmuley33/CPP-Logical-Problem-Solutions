////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program26.cpp
//  Description :   Demonstrates dynamic function usage in C by printing
//                  a message based on user-entered frequency.
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
//  Input         :    Integer
//  Output        :    void
//
/////////////////////////////////////////////////////////////////

void Display(int iFrequency)
{
    int iCnt = 0;                                 // Loop counter

    for(iCnt = 1; iCnt <= iFrequency; iCnt++)
    {
        cout << "Jay Ganesh..." << endl;          // Repeated message
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

    Display(iCount);                               // Function call

    return 0;
}   // End of main

/////////////////////////////////////////////////////////////////
//
//  Testcases:
//
//  Testcase 1:
//  Input  : 3
//  Output : Jay Ganesh... (3 times)
//
//  Testcase 2:
//  Input  : 1
//  Output : Jay Ganesh... (1 time)
//
//  Testcase 3:
//  Input  : 0
//  Output : (No output)
//
//  Testcase 4:
//  Input  : 5
//  Output : Jay Ganesh... (5 times)
//
/////////////////////////////////////////////////////////////////
