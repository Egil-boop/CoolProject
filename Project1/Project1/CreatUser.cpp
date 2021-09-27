
#include "CreatUser.h"
#include<fstream>
#include <string>

using namespace std;

CreatUser::CreatUser() {

}

void CreatUser::putUserInSystem(string file) {

	cout << "Typ in your details. The user name must be more then 2 char and less then 16" << endl;
	string username;
	cin >> username;
	if (!doesUsernameFollowTheRule(username)) {
		cout << "You have not followed the clear rule of how many chars is allowed in the usernam" << endl;
		return;
	}
	cout << "Type in your details. The password must be more then 4 char long and less then 16" << endl;
	string password;
	cin >> password;
	if (!doesPasswordFollowTheRule(password)) {
		cout << "You have not follwed the clear rule of the password" << endl;
		return;
	}

	ofstream fout;
	fout.open(file, ios::app);
	fout << username << " " << password << endl;
	fout.close();

}
bool CreatUser::doesUsernameFollowTheRule(string user) {


	int amountOfChar = user.length();

	if (amountOfChar < 2 || amountOfChar > 16) {
		cout << amountOfChar << "\n";
		return false;
	}

	return true;
}

bool CreatUser::doesPasswordFollowTheRule(string password) {

	int amountOfChar = password.length();

	if (amountOfChar < 4 || amountOfChar > 16) {
		return false;
	}

	return true;


}

