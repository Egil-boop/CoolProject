#include "Login.h"
#include <fstream>
#include <string>
#include <sstream>

using namespace std;
// F�rs�ker f�rst� headerFiler..
Login::Login() {


}

bool Login::canILogIn() {

	cout << "Write username \n";

	string user;
	cin >> user;
	if (userDataBase.find(user) == userDataBase.end()) {
		cout << "The user was not found";
		return false;
	}

	cout << "Write password \n";

	string password;
	cin >> password;

	if (userDataBase.at(user) != password) {
		cout << "Wrong password";
		return false;
	}

	cout << "Welcome! to the program";
	return true;
}


void Login::putUserNamesAndPasswordInMap(string file) {
	// L�ser in varje rad och s�tter in i en string. 

	string user;
	string password;
	int count = 0;

	fstream fin;
	fin.open(file, ios::in);
	if (fin.is_open()) {
		string tp;

		while (getline(fin, tp))
		{

			//stringstream anv�nds f�r att dela upp stringen.
			stringstream s(tp);
			while (s >> tp)
			{
				if (count == 0) {
					user = tp;
					cout << user << "User \n";
					count++;
				}
				else {
					password = tp;
					cout << password << "password \n";
				}

			}


			// Pararihop anv�ndaren med l�senordet genom att placera de i en map
			userDataBase.insert(pair<string, string>(user, password));
			// Kontroll kod f�r att kolla att storleken p� mappen �r korrekt.
			//	cout << userDataBase.size();
			count = 0;

			//cout << tp << "\n";

		}
		fin.close();
	}

}

void Login::readUserDataBase(string user, string password) {

}






// Stoppa saker i Mapps. // Denn map ska anv�ndas f�r att h�mta alla users och passwords.
// Kanskse ha en algoritm som hittar namnen snabbare fr�n denna map senare.
//	

//}

