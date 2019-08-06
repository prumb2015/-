#include <iostream>
using namespace std;
int main()
{
	char choose;
	int pass, pass1;
	string user, user1;
	do {
		cout << "//////////////Menu//////////////" << endl;
		cout << "1. Register" << endl;
		cout << "2. Login" << endl;
		cout << "Q. Exit" << endl;
		cout << "Enter Menu : ";
		cin >> choose;
		if (choose == '1')
		{
			cout << "**********Register***********" << endl;
			cout << "Input Usename : ";
			cin >> user;
			cout << "Input Password : ";
			cin >> pass;
		}
		else if (choose == '2')
		{
			cout << "***********Login************" << endl;
			cout << "Input Username : ";
			cin >> user1;
			cout << "Input password : ";
			cin >> pass1;
			if (user == user1 && pass == pass1)
			{
				cout << "Username or Password Correct ^_^" << endl;
			}
			else
			{
				cout << "!!!!Username or Password incorrect Please try again!!!!" << endl;
			}
		}
	} while (choose != 'Q' && choose != 'q');
	cout << "Exit Program" << endl;