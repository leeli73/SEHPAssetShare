#include <iostream>
#include <string>
#include "sehp.h"
using namespace std;
int main(int argc,char *argv[])
{
    sehp PrivateList(argc,argv);
    string Keyt = PrivateList.GetCookies("Keyt");
    string Command = "D:\\CHP\\Code\\Version-Public-1\\SEHPWorkFolder\\Executable\\UserDefined\\MyUploadList\\main.exe -username "+Keyt;
    system(Command.c_str());
    cout<<endl;
    exit(0);
    return 0;
}