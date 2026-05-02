////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program177.cpp
//  Description :   Prints alternating odd numbers and uppercase alphabets pattern
//  Author :        Varad Nitin Muley
//  Date :          18/11/2025
//  Input :         8
//  Output :        1 A 3 B 5 C 7 D
//                  Index : 1 2 3 4 5 6 7 8
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
//  Function Name : Display
//  Description   : Prints alternating numbers and uppercase alphabets
//  Input         : Integer
//  Output        : None
//  Author        : Varad Nitin Muley
//  Date          : 18/11/2025
//
/////////////////////////////////////////////////////////////////
void Display(int iNo)
{
    int iCnt = 0;
    char ch = 'A';
 
    for (iCnt = 1 ; iCnt <= iNo ; iCnt++)
    { 
        if((iCnt % 2) == 0)
        {
            cout<<ch<<"\t";
            ch++;
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

    cout<<"Enter the Frequency: \n";
    cin>>iValue;

    Display(iValue);

    return 0;
}

/////////////////////////////////////////////////////////////////
//
//  Test Cases
//
//  Input  : 8
//  Output : 1 A 3 B 5 C 7 D
//
//  Input  : 6
//  Output : 1 A 3 B 5 C
//
//  Input  : 5
//  Output : 1 A 3 B 5
//
/////////////////////////////////////////////////////////////////
