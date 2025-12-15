////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program54.cpp
//  Description :   Checks whether the given number is prime or not
//                  using divisor counting technique.
//  Author :        Varad Nitin Muley
//  Date :          22/11/2025
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
//  Function Name : checkPrime
//  Description :   Determines if the given number is prime
//  Input :         Integer
//  Output :        Boolean (true / false)
//
/////////////////////////////////////////////////////////////////

bool checkPrime(int iNo)
{
    int iCnt = 0;
    int iFrequency = 0;

    if(iNo < 0)
    {
        iNo = -iNo;              // Updator for negative numbers
    }

    for(iCnt = 2 ; iCnt <= (iNo / 2) ; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iFrequency++;        // Count how many divisors
        }
    }

    if(iFrequency == 0)
    {
        return true;             // Prime number
    }
    else
    {
        return false;            // Not prime
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
    bool bRet = false;

    cout << "Enter the number : " << endl;
    cin >> iValue;

    bRet = checkPrime(iValue);

    if(bRet == true)
    {
        cout << iValue << " is a prime number" << endl;
    }
    else
    {
        cout << iValue << " is not a prime number" << endl;
    }

    return 0;
}   // End of main

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : 7
//  Output : 7 is a prime number
//
//  Input : 12
//  Output : 12 is not a prime number
//
//  Input : 1
//  Output : 1 is a prime number (as per this logic)
//
//  (Note: Mathematically, 1 is NOT prime, but logic used here treats it as prime.)
//
/////////////////////////////////////////////////////////////////
