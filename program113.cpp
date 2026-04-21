////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program113.cpp
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


void Display(int *ptr)
{
    int iCnt = 0 ;

    for (iCnt = 0 ; iCnt < 4 ; iCnt++)
    {
        cout << *ptr << endl; 
        ptr++;                  
    }
}

int main ()
{
    int Arr[] = {10,20,30,40};

    Display(Arr);
    

    return 0;
}// End of main
