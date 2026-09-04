////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program124.c
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
#include <cstdlib>
using namespace std;


void Display(int Arr[],int iSize)
{
    int iCnt = 0 ;

    for (iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        cout << Arr[iCnt] << "\n";                  
    }
}

int main ()
{
    int iLength = 0 , iCnt = 0 ;
    int *ptr = NULL;


    cout << "Enter number of elements : ";
    cin >> iLength;

    ptr = (int *)malloc(iLength * sizeof(int));
    if(ptr == NULL)
    {
        cout << "Unable to allocate the memory\n";
        return -1;
    }

    cout << "Enter the elements : \n";
    
    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        cin >> ptr[iCnt];
    }

    Display (ptr,iLength);

    free(ptr);

    return 0;
}// End of main
