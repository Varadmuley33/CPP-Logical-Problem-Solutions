#include<iostream>
using namespace std;

void Display(int Brr[], int length)
{
    int i = 0;
    cout << "Elements of the array are : \n";
    
    for(i = 0; i < length; i++)
    {
        cout << Brr[i] << endl;
    }
}
     
int CountEven(int Brr[], int length)
{
    int i = 0, iCount = 0, iSum = 0;

    for(i = 0; i < length; i++)
    {
        if((Brr[i] % 2) == 0)
        {
            iCount++;
        }
    }
    return iCount;
}

int Summation(int Brr[], int length)
{
    int i = 0, iSum = 0;
    for(i = 0; i < length; i++)
    {
        iSum = iSum + Brr[i];
    }

    return iSum;
}

int main(char *A[])
{
    int iSize = 0, i = 0, iRet = 0;

    cout << "Enter the size of array : \n";
    cin >> iSize;

    int *Arr = NULL;
    Arr = new int[iSize];

    cout << "Enter the elements : \n";

    for(i = 0; i < iSize; i++)
    {
        cin >> Arr[i];
    }

    Display(Arr, iSize);

    iRet = CountEven(Arr, iSize);
    cout << "Even elements are : " << iRet << endl;

    iRet = Summation(Arr, iSize);
    cout << "Addition of all elements is : " << iRet << endl;

    delete [] Arr;

    return 0;
}
