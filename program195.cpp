////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program195.cpp
//  Description :   Prints left-aligned increasing triangle of '*' using loop condition
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
        for (j = 1 ; i >= j ; j++)
        {
            cout<<"*\t";    
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
