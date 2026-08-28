////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program133.cpp
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



int main ()
{
    int iLength = 0 ,iCnt = 0 ;
    int *iPtr = NULL;

    cout << "Enter the number of elements : \n";
    cin >> iLength;

    //Step 1 : Allocate the memory
    iPtr = (int *)malloc(iLength * sizeof(int));

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

    // Step 2 : Use the memory 
    //Call to the function which contains business logic 
    //Fun(iPtr , iLength);

    // Step 3 : Free the memory 
    free(iPtr);
    
    return 0 ;

}
