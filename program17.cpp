////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program17.cpp
//  Description :   Accepts an integer from user and checks whether
//                  the number is Even or Odd using direct boolean logic.
//  Author :        Varad Nitin Muley
//  Date :          18/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////
//
// Required Header files
//
/////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////
//
//  Function Name :    CheckEvenOdd
//  Description   :    Returns true if the given number is even,
//                     otherwise returns false.
//  Input         :    Integer
//  Output        :    Boolean
//  Author        :    Varad Nitin Muley
//  Date          :    16/10/2025
//
/////////////////////////////////////////////////////////////

bool CheckEvenOdd(int iNo)
{
    return ((iNo % 2) == 0);
}

/////////////////////////////////////////////////////////////
//
//  Entry point function of the application
//  
/////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    bool bRet = false;

    cout << "Enter number : ";
    cin >> iValue;

    bRet = CheckEvenOdd(iValue);

    if(bRet == true)
    {
        cout << iValue << " is Even number" << endl;
    }
    else
    {
        cout << iValue << " is Odd number" << endl;
    }

    return 0;
}   // End of main

/////////////////////////////////////////////////////////////////
//
//  Testcases:
//
//  Testcase 1:
//  Input  : 20
//  Output : 20 is Even number
//
//  Testcase 2:
//  Input  : 11
//  Output : 11 is Odd number
//
//  Testcase 3:
//  Input  : 0
//  Output : 0 is Even number
//
/////////////////////////////////////////////////////////////////
