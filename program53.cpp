////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program53.cpp
//  Description :   Counts and displays the total number of factors and
//                  non-factors of a given number.
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
//  Function Name : CountFactorsNonFactors
//  Description :   Displays count of factors and non-factors of iNo
//  Input :         Integer
//  Output :        void (prints counts)
//
/////////////////////////////////////////////////////////////////

void CountFactorsNonFactors(int iNo)
{
    int iCnt = 0;
    int iFrequency1 = 0;            // Count of factors
    int iFrequency2 = 0;            // Count of non-factors

    if(iNo < 0)
    {
        iNo = -iNo;                 // Updator for negative input
    }

    for(iCnt = 1 ; iCnt < iNo ; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iFrequency1++;          // Factor count
        }
        else
        {
            iFrequency2++;          // Non-factor count
        }
    }

    cout << "Number of factors are : " << iFrequency1 << endl;
    cout << "Number of non factors are : " << iFrequency2 << endl;
}

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    cout << "Enter the number : " << endl;
    cin >> iValue;

    CountFactorsNonFactors(iValue);

    return 0;
}   // End of main

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : 6
//  Output : Factors = 3     (1,2,3)
//           Non-factors = 2 (4,5)
//
//  Input : 10
//  Output : Factors = 3     (1,2,5)
//           Non-factors = 6
//
//  Input : 12
//  Output : Factors = 5     (1,2,3,4,6)
//           Non-factors = 6
//
/////////////////////////////////////////////////////////////////
