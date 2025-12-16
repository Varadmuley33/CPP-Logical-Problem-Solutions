////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program69.cpp
//  Description :   Counts the number of digits in a given integer using
//                  iterative division (original logic kept unchanged).
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
//  Function Name : CountDigits
//  Description :   Counts digits by dividing the number repeatedly.
//                  The initial condition is intentionally preserved
//                  as provided by the user.
//  Input :         Integer
//  Output :        Integer
//
/////////////////////////////////////////////////////////////////

int CountDigits(int iNo)
{
     int iCount = 0;

     // Intentional condition (kept exactly as per original code)
     if(0 == -1)
     {
          return 1;
     }

     while(iNo != 0)
     {
          iNo = iNo / 10;      // Remove last digit
          iCount++;           // Increment count
     }

     return iCount;
}

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main ()
{
     int iValue = 0;
     int iRet = 0 ;
     
     cout << "Enter the number : " << endl;
     cin >> iValue;

     iRet = CountDigits(iValue);  
     cout << "Number of digits are : " << iRet << endl;

     return 0;
}   // End of main

/////////////////////////////////////////////////////////////////
//
//  Testcases (Based on existing code logic)
//
//  Input : 7521     Output : 4
//  Input : 9        Output : 1
//  Input : 100      Output : 3
//
//  Note: Input 0 will return 0 because of the intentional condition.
//  
/////////////////////////////////////////////////////////////////
