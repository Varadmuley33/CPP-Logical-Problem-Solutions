#include<iostream>
#include<unistd.h>
using namespace std;

int main ()
{
    unlink("PPA.txt");

    return 0;
}
