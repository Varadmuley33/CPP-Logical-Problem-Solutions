////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program101.cpp
//  Description :   Takes array input from user, displays the elements,
//                  and counts the number of even elements in the array.
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
//                and count even elements
//
/////////////////////////////////////////////////////////////////

class ArrayX
{
public:
    void Display(int Brr[], int iSize)
    {
        int i = 0;
        cout << "Elements of the array are : " << endl;

        for(i = 0; i < iSize; i++)
        {
            cout << Brr[i] << endl;
        }
    }

    int CountEven(int Brr[], int iSize)
    {
        int i = 0, iCount = 0;

        for(i = 0; i < iSize; i++)
        {
            if((Brr[i] % 2) == 0)
            {
                iCount++;
            }
        }
        return iCount;
    }
};

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0, i = 0, iRet = 0;

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

    iRet = aobj->CountEven(Arr, iSize);

    cout << "Even elements are : " << iRet << endl;

    // Important
    delete aobj;
    aobj = NULL;

    delete [] Arr;
    Arr = NULL;

    return 0;
}   // End of main
