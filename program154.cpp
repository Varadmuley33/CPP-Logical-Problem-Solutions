////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program154.cpp
//  Description :   Prints numbers at odd positions and '*' at even positions
//  Author :        Varad Nitin Muley
//  Date :          18/11/2025
//  Input :         6 
//  Output :        1   *   3   *   5   *  
//
////////////////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////
//
//  Required Header files
//
/////////////////////////////////////////////////////////////////
#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////
//
//  Function name : Display
//  Description   : Displays numbers for odd count and '*' for even count
//  Input         : Integer
//  Output        : Void
//  Author        : Varad Nitin Muley
//  Date          : 18/11/2025
//
/////////////////////////////////////////////////////////////////
void Display(int iNo)
{
    int iCnt = 0 ;

    for(iCnt = 1 ; iCnt <= iNo ; iCnt ++)
    {
        if((iCnt % 2) == 0)
        {
            cout<<"*\t";
        }
        else
        {
            cout<<iCnt<<"\t";
        }
    }

    cout<<"\n";
}

/////////////////////////////////////////////////////////////////
//
//  Entry point function
//
/////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0 ;

    cout<<"Enter the Frequency : \n";
    cin>>iValue;

    Display(iValue);

    return 0;
}

/////////////////////////////////////////////////////////////////
//
//  Test cases
//
//  Input : 6
//  Output: 1   *   3   *   5   *
//
//  Input : 5
//  Output: 1   *   3   *   5
//
//  Input : 3
//  Output: 1   *   3
//
/////////////////////////////////////////////////////////////////
