#include<Windows.h>
#include<iostream>
#include<Lmcons.h>

using namespace std;

#define pos " [+] "


void GetSystemInfo() {

	char username[UNLEN + 1];
	char ComputerName[UNLEN + 1];
	char CurrentDirectory[UNLEN + 1];
	char Username[UNLEN + 1];
	LPSTR Date;

	DWORD size = UNLEN + 1;
	DWORD ComputerNameSize = MAX_COMPUTERNAME_LENGTH + 1;
	DWORD CurrentDirectorySize = UNLEN + 1;
	DWORD DateSize;
	DWORD UsernameSize;

	GetUserNameA(username, &size);
	GetComputerNameA(ComputerName, &ComputerNameSize);
	GetCurrentDirectoryA(CurrentDirectorySize, CurrentDirectory);
	GetUserNameA(Username, &UsernameSize);
	

	cout << pos << "GOT USERNAME - " << username << endl;
	cout << pos << "GOT COMPUTER NAME - " << ComputerName << endl;
	cout << pos << "GOT CURRENT DIRECTORY - " << CurrentDirectory<< endl;
	cout << pos << "GOT USERNAME - " << Username << endl;
	


}

int main() {

	GetSystemInfo();


	return 0;
}