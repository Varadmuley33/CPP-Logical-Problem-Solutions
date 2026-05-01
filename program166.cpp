////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program166.cpp
//  Description :   Prints column-wise increasing numbers pattern for each row
//  Author :        Varad Nitin Muley
//  Date :          18/11/2025
//  Input :         iRow = 4, iCol = 4
//  Output :        1 2 3 4
//                  1 2 3 4
//                  1 2 3 4
//                  1 2 3 4
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
//  Description   : Prints column-wise numbers pattern
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
            cout<<j<<"\t";
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
//  Output : 1 2 3 4
//           1 2 3 4
//           1 2 3 4
//           1 2 3 4
//
//  Input  : 2 3
//  Output : 1 2 3
//           1 2 3
//
//  Input  : 3 2
//  Output : 1 2
//           1 2
//           1 2
//
/////////////////////////////////////////////////////////////////
