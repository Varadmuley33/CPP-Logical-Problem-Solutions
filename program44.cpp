////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program44.cpp
//  Description :   Checks whether the first number is completely divisible
//                  by the second number using a user-defined function.
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
//  Function Name : CheckDivisible
//  Description :   Returns true if iNo1 is completely divisible by iNo2
//  Input :         Integer, Integer
//  Output :        Boolean
//
/////////////////////////////////////////////////////////////////

bool CheckDivisible(int iNo1, int iNo2)
{
    if((iNo1 % iNo2) == 0)                    // Divisibility check
    {
        return true;
    }
    else
    {
        return false;
    }
}

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;
    bool bRet = false;

    cout << "Enter first Number : ";
    cin >> iValue1;

    cout << "Enter second Number : ";
    cin >> iValue2;

    bRet = CheckDivisible(iValue1, iValue2);    // Function call

    if(bRet == true)
    {
        cout << "It is completely divisible\n";
    }
    else
    {
        cout << "It is not completely divisible\n";
    }

    return 0;
}   // End of main

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input  : 12   2
//  Output : It is completely divisible
//
//  Input  : 12   3
//  Output : It is completely divisible
//
//  Input  : 12   5
//  Output : It is not completely divisible
//
//  Input  : 12   12
//  Output : It is completely divisible
//
/////////////////////////////////////////////////////////////////
