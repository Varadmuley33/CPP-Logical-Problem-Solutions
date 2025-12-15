////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program56.cpp
//  Description :   Optimized prime-checking program using an alternate
//                  approach where the loop index determines primality.
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
//  Description :   Determines whether the number is prime using
//                  loop-termination logic.
//  Input :         Integer
//  Output :        Boolean
//
/////////////////////////////////////////////////////////////////

bool checkPrime(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;                      // Updator for negative input
    }

    for(iCnt = 2; iCnt <= (iNo / 2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            break;                       // Factor found → stop early
        }
    }

    if(iCnt > (iNo / 2))                 // Loop completed fully → prime
    {
        return true;
    }
    else                                 // Loop broke early → not prime
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
//  Input : 17
//  Output : 17 is a prime number
//
//  Input : 15
//  Output : 15 is not a prime number
//
//  Input : 1
//  Output : 1 is a prime number (based on this approach)
//
/////////////////////////////////////////////////////////////////

/*
    Time Complexity:
        Prime Number     : O(N/2)
        Non-prime Number : O(1) or O(2) due to early break
*/
