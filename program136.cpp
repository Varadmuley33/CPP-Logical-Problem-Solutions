////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program136.cpp
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
#include<cstdlib>

using namespace std;

typedef int * IPTR;

int FrequencyCalculate(int Arr[],int iSize, int iNo)
{
    int  iCnt = 0,iCount = 0;

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iCount++;
        }
    }
    return iCount;
}

int main ()
{
    int iLength = 0 ,iCnt = 0 ,iRet = 0 ,iValue = 0  ;
    IPTR iPtr = NULL;

    cout << "Enter the number of elements : \n";
    cin >> iLength;

    //Step 1 : Allocate the memory
    iPtr = (IPTR)malloc(iLength * sizeof(int));

    if(NULL == iPtr)
    {
        cout << "Unable to allocate the memory\n";
        return -1;
    }

    cout << "Enter the values : \n";
    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        cin >> iPtr[iCnt];
    }

    cout << "Enter the number you want to calculate the frequency : ";
    cin >> iValue;

    iRet = FrequencyCalculate(iPtr,iLength,iValue);
    cout << "Frequency of " << iValue << " is : " << iRet;

    // Step 3 : Free the memory 
    free(iPtr);
    
    return 0 ;

}
