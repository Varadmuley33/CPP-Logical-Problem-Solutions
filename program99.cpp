////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program99.cpp
//  Description :   Takes array size from user, accepts elements
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

    cout << "Enter the size of array : " << endl;
    cin >> iSize;

    int *Arr = new int[iSize];

    cout << "Enter the elements : " << endl;

    Arr[0] = 0; cin >> Arr[0];
    Arr[1] = 0; cin >> Arr[1];
    Arr[2] = 0; cin >> Arr[2];
    Arr[3] = 0; cin >> Arr[3];
    Arr[4] = 0; cin >> Arr[4];

    ArrayX *aobj = new ArrayX();
    aobj->Display(Arr, iSize);

    // Important
    delete aobj;
    aobj = NULL;

    delete [] Arr;
    Arr = NULL;

    return 0;
}   // End of main

/////////////////////////////////////////////////////////////////////////
//
//  Testcases
//
//  Input : Size=5, Elements=10 20 30 40 50 → Output : 10 20 30 40 50
//  Input : Size=3, Elements=1 2 3         → Output : 1 2 3
//  Input : Size=4, Elements=7 8 9 10      → Output : 7 8 9 10
//
////////////////////////////////////////////////////////////////////////
