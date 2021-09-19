#pragma once
#include <iostream>
#include <fstream>
#include "User.h"; // <-- För att kunna komma åt User konstruktorn.

using namespace std;
class Login
{
	Login(string name, string pass) {
		



		User user(name,pass); //Skapar en ny instance.

		

		//Hämta listan med alla namn och lösenord från en fil.

		// Kolla så att användarnamnet finns i listan och att det stämmer med lösenordet.

		// om inte det finns med error.

	}
			

	
	// :: Sätt att skapa filer :: //
	// #include <fstream>
	//ofstream MyFile;
	//MyFile.open("here.txt");
	//MyFile << "here is some text";
	//MyFile.close();
	// :: Slut sätt att skapa filer :: //




	// User name, password. Består av String.

	// Extra en krypterings algoritm.(Enkel) 



	// Ett sätt att kolla om user finns i listan eller inte
	// Om inte ett sätt att lägga till personen i listan av användare.


};



