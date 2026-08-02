////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program147.cpp
//  Author :        Varad Nitin Muley
//  Date :          14/11/2025   
//
////////////////////////////////////////////////////////////////////////////////////////////////


    

/////////////////////////////////////////////////////////////////
// 
//  Required Header files
//
/////////////////////////////////////////////////////////////////
#include<iostream>
#include<stdlib.h>
using namespace std;

typedef int * IPTR;

void ReverseDisplay(int Arr[],int iSize)
{
    int iCnt = 0 ;

    for(iCnt = iSize-1 ; iCnt >= 0 ; iCnt--)
    {
        cout<<Arr[iCnt]<<"\n";
    }
}
int main ()
{
    int iLength = 0 ,iCnt = 0 , iRet = 0 ;

    IPTR iPtr = NULL;

    cout<<"Enter the number of elements : \n";
    cin>>iLength;

    //Step 1 : Allocate the memory
    iPtr = (IPTR)malloc(iLength * sizeof(int));

    if(NULL == iPtr)
    {
        cout<<"Unable to allocate the memory\n";
        return -1;
    }

    cout<<"Enter the values : \n";
    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        cin>>iPtr[iCnt];
    }

    ReverseDisplay(iPtr,iLength);
    
    // Step 3 : Free the memory 
    free(iPtr);
    
    return 0 ;

}
