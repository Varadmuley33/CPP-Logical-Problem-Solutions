#include<iostream>
#include<fcntl.h>
#include<unistd.h>
using namespace std;

int main ()
{
    int fd = 0 ;
    int iRet = 0 ;
    char FileName[20];

    cout<<"Enter the name of file that you want to create : ";
    cin>>FileName;

    fd = creat(FileName,0777);

    if(fd == -1)
    {
        cout<<"Unable to create the file\n";
    }
    else
    {
        cout<<"File successfully created with fd : "<<fd<<"\n";
    }

    return 0;
}
