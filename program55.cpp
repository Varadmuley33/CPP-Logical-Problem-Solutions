////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program55.cpp
//  Description :   Optimized prime-checking program using early break
//                  to reduce unnecessary iterations.
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
//  Description :   Checks whether the given number is prime.
//  Input :         Integer
//  Output :        Boolean (true/false)
//
/////////////////////////////////////////////////////////////////

bool checkPrime(int iNo)
{
    int iCnt = 0;
    int iFrequency = 0;

    if(iNo < 0)
    {
        iNo = -iNo;                         // Updator for negative input
    }

    for(iCnt = 2 ; iCnt <= (iNo / 2) ; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iFrequency++;
            break;                          // Early exit for non-prime
        }
    }

    if(iFrequency == 0)                     // No divisor found
    {
        return true;
    }
    else                                    // Divisor found
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
//  Input : 13
//  Output : 13 is a prime number
//
//  Input : 20
//  Output : 20 is not a prime number
//
//  Input : 1
//  Output : 1 is a prime number (based on this logic)
//
/////////////////////////////////////////////////////////////////

/*
    Time Complexity :
        - Prime number     : O(N/2)
        - Non-prime number : O(1) or O(2) due to early break
*/
