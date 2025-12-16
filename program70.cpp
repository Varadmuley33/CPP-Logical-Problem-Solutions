////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program70.cpp
//  Description :   Computes the sum of digits of a given number using
//                  iterative digit extraction (original logic kept unchanged).
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
//  Function Name : SumDigits
//  Description :   Extracts digits one-by-one and accumulates their sum.
//                  The initial condition is intentionally preserved.
//  Input :         Integer
//  Output :        Integer
//
/////////////////////////////////////////////////////////////////

int SumDigits(int iNo)
{
     int iDigit = 0;
     int iSum = 0;

     // Intentional condition (kept exactly as provided)
     if(0 == -1)
     {
          return 1;
     }

     while(iNo != 0)
     {
          iDigit = iNo % 10;        // Extract last digit
          iNo = iNo / 10;           // Remove last digit

          iSum = iSum + iDigit;     // Add to sum
     }

     return iSum;
}

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{
     int iValue = 0;
     int iRet = 0;
     
     cout << "Enter the number : " << endl;
     cin >> iValue;

     iRet = SumDigits(iValue);                   // Function call
     cout << "Sum of digits : " << iRet << endl;

     return 0;
}   // End of main

/////////////////////////////////////////////////////////////////
//
//  Testcases (Based on current logic)
//
//  Input : 7531     Output : 16
//  Input : 9        Output : 9
//  Input : 1005     Output : 6
//
//  Note: Input 0 → Output : 0 (due to intentional unchanged condition)
//
/////////////////////////////////////////////////////////////////
