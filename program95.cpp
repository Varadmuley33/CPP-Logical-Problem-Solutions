////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program95.cpp
//  Description :   Takes input of array dynamically and
//                  displays its elements on screen.
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
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{
    int *Arr = new int[4];     // Dynamic memory allocation for array

    cout << "Number of elements : " << 4 << endl;
    cout << Arr[0] << endl;
    cout << Arr[1] << endl;
    cout << Arr[2] << endl;
    cout << Arr[3] << endl;

    // Important
    delete [] Arr;
    Arr = NULL;

    return 0;
}   // End of main
