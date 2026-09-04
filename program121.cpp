////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program121.c
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


void Display(int Arr[])
{
    int iCnt = 0 ;

    for (iCnt = 0 ; iCnt < 7 ; iCnt++)
    {
        cout << Arr[iCnt] << "\n";                  
    }
}

int main ()
{
    int Brr[] = {10,20,30,40};     
 
    Display(Brr);
    

    return 0;
}// End of main
