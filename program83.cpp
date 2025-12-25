////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program82.cpp
//  Description :   Demonstrates object-oriented programming by defining
//                  a class that checks whether a user-entered number
//                  is a perfect number or not.
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
    int i;          // Loop counter
    int iSum;       // Stores sum of factors

public:
    Number()
    {
        i = 0;
        iSum = 0;
    }

    bool CheckPerfect(int iNo)
    {
        if(iNo < 0)                 // Handle negative input
        {
            iNo = -iNo;
        }

        for(i = 1; i <= (iNo / 2); i++)     // Loop till half of number
        {
            if((iNo % i) == 0)              // Check factor
            {
                iSum = iSum + i;
            }
        }

        return (iSum == iNo);       // Direct boolean return (as in Java)
    }
};

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;         // Stores user input
    bool bRet = false;     // Stores result

    cout << "Enter number : " << endl;
    cin >> iValue;

    Number *nobj = new Number();    // Dynamic object creation

    bRet = nobj->CheckPerfect(iValue);

    if(bRet == true)
    {
        cout << iValue << " is perfect number " << endl;
    }
    else
    {
        cout << iValue << " is not a perfect number " << endl;
    }

    // Important
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
//  Input : -28
//  Output : -28 is perfect number
//
//  Input : 12
//  Output : 12 is not a perfect number
//
/////////////////////////////////////////////////////////////////
