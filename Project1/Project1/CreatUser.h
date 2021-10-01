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




		// Kalla på funktion för att kolla om namn och pass stämmer överäns med reglerna.
			// 
			// : Regler : //
			// Namn måste vara mellan 4-8 karaktärer. 
			// Lösenordet måste innehålla minst 1 Siffra och storbokstav max 10 karaktärer långt.
			// : Slut på regler :: // 

			//Function createUser(String name, String password)
	};

}