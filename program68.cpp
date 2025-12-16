////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program68.cpp
//  Description :   Demonstrates digit-counting logic (with intentional
//                  condition kept exactly as provided by the user).
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
//  Description :   Counts digits of the given number by iterative
//                  division. The initial condition is intentionally
//                  kept unchanged as per the original logic.
//  Input :         Integer
//  Output :        Integer
//
/////////////////////////////////////////////////////////////////

int CountDigits(int iNo)
{
     int iDigit = 0;
     int iCount = 0;

     // Intentional condition (kept exactly as per user code)
     if(0 == -1)
     {
          return 1;
     }

     while(iNo != 0)
     {
          iDigit = iNo % 10;      // Extract digit
          iNo = iNo / 10;         // Remove digit
          iCount++;               // Count digit
     }

     return iCount;
}

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{
     int iValue = 0;
     int iRet = 0 ;
     
     cout << "Enter the number : " << endl;
     cin >> iValue;

     iRet = CountDigits(iValue);
     cout << "Number of digits are : " << iRet << endl;

     return 0;
}

/////////////////////////////////////////////////////////////////
//
//  Testcases (Based on existing logic)
//
//  Input : 7236      Output : 4
//  Input : 98015     Output : 5
//  Input : 5         Output : 1
//
//  (Note: For input 0 → Output will be 0 because of the
//         intentional unchanged condition.)
//
/////////////////////////////////////////////////////////////////
