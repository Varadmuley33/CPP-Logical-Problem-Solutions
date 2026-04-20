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

    cout << "Elements of the array are \n";

    for(i = 0; i < iSize; i++)
    {
        cout << Arr[i] << endl;
    }
}

float Average(int Arr[], int iSize)
{
    int i = 0;
    int iSum = 0;

    for(i = 0; i < iSize; i++)
    {
        iSum = iSum + Arr[i];
    }

    return (iSum / iSize);
}

int main()
{
    float fRet = 0.0f;

    int *Arr1 = NULL;
    int iSize1 = 5;

    cout << "Inside constructor\n";
    Arr1 = new int[iSize1];

    Accept(Arr1, iSize1);
    Display(Arr1, iSize1);
    fRet = Average(Arr1, iSize1);

    cout << "Average is : " << fRet << endl;

    delete [] Arr1;

    return 0;
}
