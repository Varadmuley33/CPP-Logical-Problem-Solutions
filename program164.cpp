////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program164.cpp
//  Description :   Prints rectangular matrix pattern of '*' using rows and columns
//  Author :        Varad Nitin Muley
//  Date :          18/11/2025
//  Input :         iRow = 3, iCol = 4
//  Output :        * * * *
//                  * * * *
//                  * * * *
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
//  Description   : Prints matrix pattern of *
//  Input         : Two Integers
//  Output        : None
//  Author        : Varad Nitin Muley
//  Date          : 18/11/2025
//
/////////////////////////////////////////////////////////////////
void Display(int iRow,int iCol)
{
    int i = 0 , j = 0 ;

    for(i = 1 ; i <= iRow ; i++)
    {
        for (j = 1 ; j <= iCol ; j++)
        {
            cout<<"*\t";
        }
        cout<<"\n";
    }
}

/////////////////////////////////////////////////////////////////
//
//  Entry point function
//
/////////////////////////////////////////////////////////////////
int main()
{
    int iValue1 = 0 ,iValue2 = 0;
        
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
//  Input  : 3 4
//  Output : * * * *
//           * * * *
//           * * * *
//
//  Input  : 2 3
//  Output : * * *
//           * * *
//
//  Input  : 4 2
//  Output : * *
//           * *
//           * *
//           * *
//
/////////////////////////////////////////////////////////////////
