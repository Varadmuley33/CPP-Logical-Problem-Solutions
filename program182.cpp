////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program182.cpp
//  Description :   Prints alternating rows of lowercase alphabets and numbers
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
//  Description   : Displays pattern of characters and numbers
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
            if((i % 2) == 0)
            {
                cout<<j<<"\t";
            }
            else
            {
                cout<<ch<<"\t";
            }
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
//           1 2 3 4
//           a b c d
//           1 2 3 4
//
//  Input  : 3 5
//  Output : 
//           a b c d e
//           1 2 3 4 5
//           a b c d e
//
//  Input  : 2 3
//  Output : 
//           a b c
//           1 2 3
//
/////////////////////////////////////////////////////////////////
