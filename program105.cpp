#include<iostream>
using namespace std;

void Accept(int Arr[], int iSize)
{
    int i = 0;

    cout << "Enter the elements of Array : \n";

    for(i = 0; i < iSize; i++)
    {
        cin >> Arr[i];
    }
}

void Display(int Arr[], int iSize)
{
    int i = 0;

    cout << "elements of the array are \n";

    for(i = 0; i < iSize; i++)
    {
        cout << Arr[i] << endl;
    }
}

int main()
{
    int *Arr1 = NULL;
    int iSize1 = 5;

    cout << "Inside constructor\n";
    Arr1 = new int[iSize1];

    cout << iSize1 << endl;

    iSize1 = 11;
    Arr1 = NULL;

    int *Arr2 = NULL;
    int iSize2 = 7;

    cout << "Inside constructor\n";
    Arr2 = new int[iSize2];

    cout << iSize2 << endl;

    delete [] Arr2;

    return 0;
}
