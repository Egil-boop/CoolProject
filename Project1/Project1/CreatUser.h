#pragma once
#include<iostream>;
#include <Windows.h>
namespace std {


	class CreatUser
	{

		// Skapar en user och stoppar de i en ("Krypterad fil")
	public:
		CreatUser();

		void putUserInSystem(string);

	private:
		bool doesPasswordFollowTheRule(string);
		bool doesUsernameFollowTheRule(string);
		/*void hideOutPut(HANDLE*,DWORD,bool);*/




		// Kalla p� funktion f�r att kolla om namn och pass st�mmer �ver�ns med reglerna.
			// 
			// : Regler : //
			// Namn m�ste vara mellan 4-8 karakt�rer. 
			// L�senordet m�ste inneh�lla minst 1 Siffra och storbokstav max 10 karakt�rer l�ngt.
			// : Slut p� regler :: // 

			//Function createUser(String name, String password)
	};

}