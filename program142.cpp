////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program142.cpp
//  Description :   
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


//O(N)
bool LinearSearch(int Arr[],int iSize, int iNo)
{
    int  iCnt = 0 ;

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            break;
        }
    }

    return(iCnt != iSize);    
}

int main ()
{
    int iLength = 0 ,iCnt = 0  ,iValue = 0  ;
    bool bRet = false;

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

    cout<<"Enter the number you want to search : ";
    cin>>iValue;

    bRet = LinearSearch(iPtr,iLength,iValue);

    if(bRet == true)
    {
        cout<<iValue<<" is present in given elements \n";
    }
    else
    {
        cout<<iValue<<" is not present in given elements \n";
    }

    // Step 3 : Free the memory 
    free(iPtr);
    
    return 0 ;

}
