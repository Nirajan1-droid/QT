#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    DWORD dwSize = MAX_PATH;
    LPWSTR szLogicalDrives;
    DWORD dwResult = GetLogicalDriveStrings(dwSize, szLogicalDrives);

    if (dwResult > 0 && dwResult <= MAX_PATH)
    {

        char SingleDrive[100];
        wcstombs(SingleDrive, szLogicalDrives, wcslen(szLogicalDrives));
        char *szSingleDrive = SingleDrive;
        while (*szSingleDrive)
        {
            string letter = szSingleDrive;
            letter.pop_back();
            cout << letter << endl;

            // get the next drive
            szSingleDrive += strlen(szSingleDrive) + 1;
        }
    }
    return 0;
}
