////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program179.cpp
//  Description :   Prints continuous lowercase alphabets in matrix sequence
//  Author :        Varad Nitin Muley
//  Date :          18/11/2025
//  Input :         iRow = 4, iCol = 4    
//  Output :        a b c d
//                  e f g h
//                  i j k l
//                  m n o p
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
//  Description   : Prints continuous lowercase alphabets in matrix form
//  Input         : Two Integers
//  Output        : None
//  Author        : Varad Nitin Muley
//  Date          : 18/11/2025
//
/////////////////////////////////////////////////////////////////
void Display(int iRow,int iCol)
{
    int i = 0 ,j = 0;
    char ch = 'a';
 
    for (i = 1 ; i <= iRow ; i++)
    {
        for (j = 1 ; j <= iCol ; j++)  
        {
            cout<<ch<<"\t";
            ch++;
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
//  Output : a b c d
//           e f g h
//           i j k l
//           m n o p
//
//  Input  : 2 3
//  Output : a b c
//           d e f
//
//  Input  : 3 2
//  Output : a b
//           c d
//           e f
//
/////////////////////////////////////////////////////////////////
