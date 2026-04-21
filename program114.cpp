////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program114.cpp
//  Description :   Print value of array using loop with dynamic size
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


void Display(int Arr[], int iSize)
{
    int iCnt = 0 ;

    for (iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        cout << Arr[iCnt] << endl;                  
    }
}

int main ()
{
    int iSize = 0;
    int *Brr = NULL;

    cout << "Enter number of elements : \n";
    cin >> iSize;

    Brr = new int[iSize];

    cout << "Enter elements : \n";
    for(int iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        cin >> Brr[iCnt];
    }

    Display(Brr, iSize);

    delete [] Brr;

    return 0;
}// End of main
