#include<iostream>
#include<unistd.h>
using namespace std;

int main ()
{
    int iRet = unlink("PPA.txt");

    if(iRet == -1)
    {
        cout<<"Unable to delete the file\n";
    }
    else
    {
        cout<<"File deleted successfully\n";
    }

    return 0;
}
