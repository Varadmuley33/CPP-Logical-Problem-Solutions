////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program88.cpp
//  Description :   Demonstrates object-oriented programming by defining
//                  a class that calculates the factorial of a
//                  user-entered number using a long data type
//                  to handle larger factorial values.
//  Author :        Varad Nitin Muley
//  Date :          18/11/2025
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
//  Description : Provides functionality to calculate factorial
//
/////////////////////////////////////////////////////////////////

class Number
{
public:
    long CalculateFactorial(int iNo)
    {
        int i = 0;
        long iFact = 1;        // Important

        if(iNo < 0)            // Handle negative input
        {
            iNo = -iNo;
        }

        for(i = 1; i <= iNo; i++)
        {
            iFact = iFact * i;
        }

        return iFact;
    }
};

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;        // Variable to store user input
    long iRet = 0;         // Variable to store result

    cout << "Enter number : " << endl;
    cin >> iValue;         // Accept number from user

    Number *nobj = new Number();     // Dynamically create object

    iRet = nobj->CalculateFactorial(iValue);
    cout << "Factorial is : " << iRet << endl;

    // Important
    delete nobj;
    nobj = NULL;

    return 0;
}   // End of main

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : 5
//  Output : Factorial is : 120
//
//  Input : -6
//  Output : Factorial is : 720
//
//  Input : 10
//  Output : Factorial is : 3628800
//
/////////////////////////////////////////////////////////////////
