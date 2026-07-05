////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program103.cpp
//  Description :   Design the class using OOP design
//  Author :        Varad Nitin Muley
//  Date :          18/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////
     
#include<iostream>
using namespace std;

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Class name    : ArrayX
//  Description   : Handles dynamic memory allocation for arrays
//
////////////////////////////////////////////////////////////////////////////////////////////////

class ArrayX
{
    public:
        int *Arr1;
        int *Arr2;
        int *Arr3;

        int iSize1;
        int iSize2;
        int iSize3;

        ArrayX()
        {
            iSize1 = 5;
            iSize2 = 7;
            iSize3 = 3;

            Arr1 = new int[iSize1];
            Arr2 = new int[iSize2];
            Arr3 = new int[iSize3];
        }

        ~ArrayX()
        {
            delete [] Arr1;
            delete [] Arr2;
            delete [] Arr3;
        }
};

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : main
//  Description   : Entry point of application
//  Input         : NA
//  Output        : NA
//  Author        : Varad Nitin Muley
//  Date          : 18/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    ArrayX obj;

    return 0;
}
