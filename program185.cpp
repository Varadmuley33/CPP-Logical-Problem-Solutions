////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program185.cpp
//  Description :   Prints hollow rectangular border pattern using '*'
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
//  Description   : Displays hollow border pattern
//  Input         : Integer, Integer
//  Output        : void
//  Author        : Varad Nitin Muley
//  Date          : 18/11/2025
//
/////////////////////////////////////////////////////////////////

void Display(int iRow,int iCol)
{
    int i = 0 ,j = 0;
    int iFirst = 0, iLast = 0;

    for (i = 1 ; i <= iRow ; i++)
    {
        for (j = 1 ; j <= iCol ; j++)
        {
            if((i == 1) || (i == iRow) || (j == 1) || (j == iCol))
            {
                cout<<"*\t";
            }
            else
            {
                cout<<"\t";
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
//  Input  : 6 6
//  Output : 
//           * * * * * *
//           *         *
//           *         *
//           *         *
//           *         *
//           * * * * * *
//
//  Input  : 4 5
//  Output : 
//           * * * * *
//           *       *
//           *       *
//           * * * * *
//
//  Input  : 3 3
//  Output : 
//           * * *
//           *   *
//           * * *
//
/////////////////////////////////////////////////////////////////
