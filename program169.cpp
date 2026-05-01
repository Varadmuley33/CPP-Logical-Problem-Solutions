////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program169.cpp
//  Description :   Prints alternating rows of '*' and row number pattern
//  Author :        Varad Nitin Muley
//  Date :          18/11/2025
//  Input :         iRow = 4, iCol = 4
//  Output :        * * * *
//                  2 2 2 2
//                  * * * *
//                  4 4 4 4
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
//  Description   : Prints alternating rows of * and row number
//  Input         : Two Integers
//  Output        : None
//  Author        : Varad Nitin Muley
//  Date          : 18/11/2025
//
/////////////////////////////////////////////////////////////////
void Display(int iRow,int iCol)
{
    int i = 0 ,j = 0;
 
    for (i = 1 ; i <= iRow ; i++)
    {
        for (j = 1 ; j <= iCol ; j++)
        {
            if((i % 2 ) == 0)
            {
                cout<<i<<"\t";
            }
            else
            {
                cout<<"*\t";
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
//  Test Cases
//
//  Input  : 4 4
//  Output : * * * *
//           2 2 2 2
//           * * * *
//           4 4 4 4
//
//  Input  : 3 3
//  Output : * * *
//           2 2 2
//           * * *
//
//  Input  : 2 5
//  Output : * * * * *
//           2 2 2 2 2
//
/////////////////////////////////////////////////////////////////
