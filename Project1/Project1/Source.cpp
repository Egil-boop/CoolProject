#include <iostream>
#include <fstream>
#include "Login.h";
#include "CreatUser.h";

using namespace std;

int main() {

	//const int SIZE = 2;
	//string name[SIZE] = { "Jim", "EGil" };
	//string password[SIZE] = { "katt", "hund" };

	//ofstream fout("userDataBase.txt");

	//for (int i = 0; i < SIZE; i++) {
	//fout << name[i] << " " << password[i] << endl;
 //	}

	//Skapa Användare
	CreatUser creatUser;
	creatUser.putUserInSystem("userDataBase.txt");

	Login log;
	log.putUserNamesAndPasswordInMap("userDataBase.txt");
	log.canILogIn();
	
	return 0; 

	//Login login = new Login();

	//login.login(username, password);
	//LoginMessage msg = login.createUser();
	//
	//LoginMessage
	//	errorcode
	//	success?

	//ConsertHandler 

	//PaymentHandler
	//	


	//while (1) {
	//	case 1
	//		login
	//	case 2
	//		show conserts
	//	case 3
	//		exit
	//}

}