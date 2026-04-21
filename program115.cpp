////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program115.cpp
//  Description :   Print value of array using loop 
//  Author :        Varad Nitin Muley
//  Date :          13/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////




/////////////////////////////////////////////////////////////////
// 
//  Required Header files
//
/////////////////////////////////////////////////////////////////
#include <iostream>
using namespace std;


void Display(int *Arr)
{
    int iCnt = 0 ;

    for (iCnt = 0 ; iCnt < 4 ; iCnt++,Arr++)
    {
        cout << *Arr << endl;                  
    }
}

int main ()
{
    int Arr[] = {10,20,30,40};

    Display(Arr);
    

    return 0;
}// End of main
