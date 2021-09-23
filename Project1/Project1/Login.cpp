#include "Login.h"
#include <fstream>
using namespace std;
// Försöker förstå headerFiler..
Login::Login(string user, string password) {

	
	username =  user;
	password = password;
	ifstream fin("userDataBase.txt", ifstream::binary);

	if (fin) {
		fin.seekg(0, fin.end);
		int length = fin.tellg();
		fin.seekg(0, fin.beg);
	}

}


void Login::readUserDataBase(string user, string password) {




// Stoppa saker i Mapps. // Denn map ska användas för att hämta alla users och passwords.
// Kanskse ha en algoritm som hittar namnen snabbare från denna map senare.
	userDataBase.insert(pair<string, string>(user, password));

}

