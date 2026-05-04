////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program191.cpp
//  Description :   Prints matrix with '%' on diagonal, '*' below and '#' above
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

void Display(int iRow,int iCol)
{
    int i = 0 ,j = 0;
 
    if(iRow != iCol)
    {
        cout<<"Invalid Input\n";
        cout<<"Row number and column number should be same\n";
        return;
    }

    for (i = 1 ; i <= iRow ; i++)
    {
        for (j = 1 ; j <= iCol ; j++)
        {
            if(i == j)
            {
                cout<<"%\t";
            }
            else if(i > j)
            {
                cout<<"*\t";
            }
            else
            {
                cout<<"#\t";
            }
        }
        cout<<"\n";
    }
   
    cout<<"\n"; 
}

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
