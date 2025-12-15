////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program59.cpp
//  Description :   Prime number checking by initializing the flag
//                  inside the for loop initialiser section.
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
//  Description :   Returns true if number is prime, otherwise false.
//  Input :         Integer
//  Output :        Boolean
//
/////////////////////////////////////////////////////////////////

bool checkPrime(int iNo)
{
    int iCnt = 0;
    bool bFlag = false;                 // Initial value (changed as per logic)

    if(iNo < 0)
    {
        iNo = -iNo;                     // Updator for negative input
    }

    // Initialize iCnt and bFlag inside loop initialiser
    for(iCnt = 2, bFlag = true; iCnt <= (iNo / 2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            bFlag = false;              // Factor found → not prime
            break;                      // Optimization
        }
    }

    return bFlag;
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
//  Input : 23
//  Output : 23 is a prime number
//
//  Input : 28
//  Output : 28 is not a prime number
//
//  Input : 5
//  Output : 5 is a prime number
//
/////////////////////////////////////////////////////////////////

/*
    Time Complexity:
        Prime number     : O(N/2)
        Non-prime number : O(1) or O(2)
*/
