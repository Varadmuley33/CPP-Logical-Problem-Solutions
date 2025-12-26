////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program94.cpp
//  Description :   Displays array elements on screen using
//                  iterative approach by passing array to a class method.
//  Input :         Integer
//  Output :        Integer
//  Author :        Varad Nitin Muley
//  Date :          18/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////
//
//  Required Header files
//
/////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

/////////////////////////////////////////////////////////////////
//
//  Class Name : ArrayX
//  Description : Provides functionality to display array elements
//
/////////////////////////////////////////////////////////////////

class ArrayX
{
public:
    void Display(int Brr[], int iSize)
    {
        int i = 0;

        for(i = 0; i < iSize; i++)
        {
            cout << Brr[i] << endl;
        }
    }
};

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{
    int Arr[] = {10, 20, 30, 40};

    int iLength = sizeof(Arr) / sizeof(Arr[0]);

    ArrayX *aobj = new ArrayX();

    aobj->Display(Arr, iLength);

    // Important
    delete aobj;
    aobj = NULL;

    return 0;
}   // End of main
