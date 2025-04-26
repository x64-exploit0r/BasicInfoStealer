#include<Windows.h>
#include<iostream>
#include<Lmcons.h>

using namespace std;

void GetSystemInfo() {

	char user[UNLEN + 1];
	char ComputerName[MAX_COMPUTERNAME_LENGTH + 1];

	DWORD compsize;
	DWORD usrlen = UNLEN + 1;


	GetUserNameA(user, &usrlen);
	cout << "[+] Username: " << user << endl;

	GetComputerNameA(ComputerName, &compsize);
	cout << "[+] Computer Name: " << ComputerName << endl;
}


int main() {

	GetSystemInfo();


	return 0;
}