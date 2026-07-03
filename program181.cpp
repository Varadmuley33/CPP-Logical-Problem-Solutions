 ////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program181.cpp
//  Description :   Prints repeating lowercase alphabets using inner loop initialization
//  Author :        Varad Nitin Muley
//  Date :          18/11/2025
//  Input :         6
//  Output :        
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
//  Description   : Displays pattern of characters
//  Input         : Integer, Integer
//  Output        : void
//  Author        : Varad Nitin Muley
//  Date          : 18/11/2025
//
/////////////////////////////////////////////////////////////////

void Display(int iRow,int iCol)
{
    int i = 0 ,j = 0;
    char ch = '\0';

    for (i = 1 ; i <= iRow ; i++)
    {
        for (j = 1,ch = 'a' ; j <= iCol ; j++,ch++)
        {
            cout<<ch<<"\t";
        }
        cout<<"\n";
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
    int iValue1 = 0 ,iValue2 = 0 ;

    cout<<"Enter the number of rows : \n";
    cin>>iValue1;

    cout<<"Enter the number of columns : \n";
    cin>>iValue2;

    Display(iValue1,iValue2);

    return 0;
}

/////////////////////////////////////////////////////////////////
//
//  Testcases :
//
//  Input  : 4 4
//  Output : 
//           a b c d
//           a b c d
//           a b c d
//           a b c d
//
//  Input  : 3 5
//  Output : 
//           a b c d e
//           a b c d e
//           a b c d e
//
//  Input  : 2 3
//  Output : 
//           a b c
//           a b c
//
/////////////////////////////////////////////////////////////////
