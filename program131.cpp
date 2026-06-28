////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program131.cpp
//  Description :   Count even numbers 
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

float Average(int Arr[],int iSize)
{
    int iCnt = 0 , iSum = 0 ;

    for (iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        iSum = iSum + Arr[iCnt];              
    }
    
    return (iSum/iSize);    // Issue always shows 0 after point
}

int main ()
{
    int iLength = 0 , iCnt = 0 ;
    float fRet = 0;
    int *ptr = NULL;


    cout << "Enter number of elements : ";
    cin >> iLength;

    ptr = (int *)malloc(iLength * sizeof(int));
    if(NULL == ptr)      //Industrial way of coding 
    {
        cout << "Unable to allocate the memory\n";
        return -1;
    }

    cout << "Enter the elements : \n";
    
    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        cin >> ptr[iCnt];
    }

    fRet = Average (ptr,iLength);
    cout << "Average of elements is  : " << fRet << "\n";

    free(ptr);

    return 0;
}// End of main
