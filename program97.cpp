////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program97.cpp
//  Description :   Demonstrates separation of logic by creating
//                  a separate class function to display array elements.
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
    int Arr[4];

    Arr[0] = 10;
    Arr[1] = 20;
    Arr[2] = 30;
    Arr[3] = 40;

    ArrayX *aobj = new ArrayX();

    aobj->Display(Arr, 4);

    // Important
    delete aobj;
    aobj = NULL;

    return 0;
}   // End of main
