////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program79.cpp
//  Description :   Demonstrates object-oriented programming by defining
//                  a class that checks whether a user-entered number
//                  is a perfect number or not.
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
//  Class Name : Number
//  Description : Provides functionality to check a perfect number
//
/////////////////////////////////////////////////////////////////

class Number
{
    int i;          // Loop counter as data member
    int iSum;       // Stores sum of factors

public:
    Number()
    {
        i = 0;
        iSum = 0;
    }

    bool CheckPerfect(int iNo)
    {
        for(i = 1; i <= (iNo / 2); i++)     // Iterate till half of the number
        {
            if((iNo % i) == 0)              // Check whether 'i' is a factor
            {
                iSum = iSum + i;            // Add factor to sum
            }
        }

        if(iSum == iNo)                     // Compare sum of factors with number
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;         // Variable to store user input
    bool bRet = false;     // Variable to store result

    cout << "Enter number : " << endl;
    cin >> iValue;         // Accept number from user

    Number *nobj = new Number();     // Dynamically create object

    bRet = nobj->CheckPerfect(iValue);   // Check perfect number

    if(bRet == true)
    {
        cout << iValue << " is perfect number " << endl;
    }
    else
    {
        cout << iValue << " is not a perfect number " << endl;
    }

    // Important:
    // Java garbage collection logic is replaced by explicit deletion in C++
    delete nobj;
    nobj = NULL;

    return 0;
}   // End of main

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : 6
//  Output : 6 is perfect number
//
//  Input : 28
//  Output : 28 is perfect number
//
//  Input : 12
//  Output : 12 is not a perfect number
//
/////////////////////////////////////////////////////////////////
