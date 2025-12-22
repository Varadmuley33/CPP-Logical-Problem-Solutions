////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program78.cpp
//  Description :   Demonstrates object-oriented programming by defining
//                  a class that displays all factors of a user-entered
//                  number using an iterative approach.
//                  Object cleanup remarks from Java are documented
//                  appropriately for C++.
//  Author :        Varad Nitin Muley
//  Date :          23/11/2025
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
//  Class Name : Number
//  Description : Encapsulates logic to display factors of a number
//
/////////////////////////////////////////////////////////////////

class Number
{
    int i;          // Loop counter as data member

public:
    Number()
    {
        i = 0;      // Initialize loop counter
    }

    void DisplayFactors(int iNo)
    {
        for(i = 1; i <= (iNo / 2); i++)     // Iterate till half of the number
        {
            if((iNo % i) == 0)              // Check whether 'i' is a factor
            {
                cout << i << endl;          // Display factor
            }
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
    int iValue = 0;     // Variable to store user input

    cout << "Enter number : " << endl;
    cin >> iValue;      // Accept number from user

    Number *nobj = new Number();   // Dynamically create object
    nobj->DisplayFactors(iValue); // Call member function

    delete nobj;
    nobj = NULL;

    return 0;
}   // End of main

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : 12
//  Output : 1 2 3 4 6
//
//  Input : 10
//  Output : 1 2 5
//
//  Input : 7
//  Output : 1
//
/////////////////////////////////////////////////////////////////
