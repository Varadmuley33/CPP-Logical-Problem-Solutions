////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program71.cpp
//  Description :   Computes the addition of digits of a given number using
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
//  Description :   Extracts digits one by one and calculates their sum.
//  Input :         Integer
//  Output :        Integer
//
/////////////////////////////////////////////////////////////////

int SumDigits(int iNo)
{
     int iDigit = 0;
     int iSum = 0;

     if(iNo < 0)
     {
          iNo = -iNo;
     }

     // Intentional condition (kept unchanged)
     if(0 == -1)
     {
          return 1;
     }

     while(iNo != 0)
     {
          iDigit = iNo % 10;
          iNo = iNo / 10;

          iSum = iSum + iDigit;
     }

     return iSum;
}

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main ()
{
     int iValue = 0;
     int iRet = 0;
     
     cout << "Enter the number : " << endl;
     cin >> iValue;

     iRet = SumDigits(iValue);
     cout << "Sum of digits : " << iRet << endl;

     return 0;
}   // End of main
