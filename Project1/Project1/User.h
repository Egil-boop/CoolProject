#pragma once
#include <iostream>;

using namespace std;
class User
{
	// skapa BookableEvent.
public:
	string getUserNameAndPassword();
	// changes Password (Måste skriva in sitt gamla)

private:
	string username;
	string password;
	double cashBalance = 0.0;
	//BookkableEvent booked[];

	User(string name, string pass ) {

		// Kalla på funktion för att kolla om namn och pass stämmer överäns med reglerna.
		// 
		// : Regler : //
		// Namn måste vara mellan 4-8 karaktärer. 
		// Lösenordet måste innehålla minst 1 Siffra och storbokstav max 10 karaktärer långt.
		// : Slut på regler :: // 
		
		username = name;
		password = pass;
	}

	

};

