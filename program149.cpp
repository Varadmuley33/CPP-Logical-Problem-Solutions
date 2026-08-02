////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program147.cpp
//  Author :        Varad Nitin Muley   
//  Date :          14/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////



      
/////////////////////////////////////////////////////////////////
// 
//  Required Header files
//
/////////////////////////////////////////////////////////////////
#include<iostream>
#include<stdlib.h>
using namespace std;

void Swap (int *p , int *q)
{
    int Temp = 0;

    Temp = *p;
    *p = *q;
    *q = Temp;
}

int main ()
{
    
    int iValue1 = 11;
    int iValue2 = 21;

    cout<<"Before swap "<<iValue1<<" "<<iValue2<<"\n";

    Swap(&iValue1,&iValue2);

    cout<<"After swap "<<iValue1<<" "<<iValue2<<"\n";

    return 0 ;

}
