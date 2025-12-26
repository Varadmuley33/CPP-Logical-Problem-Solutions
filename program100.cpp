////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program100.cpp
//  Description :   Takes array size and elements from user
//                  and displays them using a separate class function.
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
    int iSize = 0;
    int i = 0;

    cout << "Enter the size of array : " << endl;
    cin >> iSize;

    int *Arr = new int[iSize];

    cout << "Enter the elements : " << endl;

    for(i = 0; i < iSize; i++)
    {
        cin >> Arr[i];
    }

    ArrayX *aobj = new ArrayX();
    aobj->Display(Arr, iSize);

    // Important
    delete aobj;
    aobj = NULL;

    delete [] Arr;
    Arr = NULL;

    return 0;
}   // End of main
