#pragma once
#include <iostream>;

namespace std {


	class User
	{
		// skapa BookableEvent.
	public:
		string getUserNameAndPassword();
		// changes Password (M?ste skriva in sitt gamla)
		User(string name, string pass) {

			// Kalla p? funktion f?r att kolla om namn och pass st?mmer ?ver?ns med reglerna.
			// 
			// : Regler : //
			// Namn m?ste vara mellan 4-8 karakt?rer. 
			// L?senordet m?ste inneh?lla minst 1 Siffra och storbokstav max 10 karakt?rer l?ngt.
			// : Slut p? regler :: // 

			username = name;
			password = pass;
		}

	private:
		string username;
		string password;
		double cashBalance = 0.0;
		//BookkableEvent booked[];





	};
}

