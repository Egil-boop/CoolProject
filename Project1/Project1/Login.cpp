#include "Login.h"
#include <fstream>
#include <string>
#include <sstream>

using namespace std;
// Försöker förstå headerFiler..
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
	// Läser in varje rad och sätter in i en string. 

	string user;
	string password;
	int count = 0;

	fstream fin;
	fin.open(file, ios::in);
	if (fin.is_open()) {
		string tp;

		while (getline(fin, tp))
		{

			//stringstream används för att dela upp stringen.
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


			// Pararihop användaren med lösenordet genom att placera de i en map
			userDataBase.insert(pair<string, string>(user, password));
			// Kontroll kod för att kolla att storleken på mappen är korrekt.
			//	cout << userDataBase.size();
			count = 0;

			//cout << tp << "\n";

		}
		fin.close();
	}

}

void Login::readUserDataBase(string user, string password) {

}






// Stoppa saker i Mapps. // Denn map ska användas för att hämta alla users och passwords.
// Kanskse ha en algoritm som hittar namnen snabbare från denna map senare.
//	

//}

