#pragma once
#include <iostream>
#include <fstream>
#include "User.h"; // <-- F�r att kunna komma �t User konstruktorn.

using namespace std;
class Login
{
	Login(string name, string pass) {
		



		User user(name,pass); //Skapar en ny instance.

		

		//H�mta listan med alla namn och l�senord fr�n en fil.

		// Kolla s� att anv�ndarnamnet finns i listan och att det st�mmer med l�senordet.

		// om inte det finns med error.

	}
			

	
	// :: S�tt att skapa filer :: //
	// #include <fstream>
	//ofstream MyFile;
	//MyFile.open("here.txt");
	//MyFile << "here is some text";
	//MyFile.close();
	// :: Slut s�tt att skapa filer :: //




	// User name, password. Best�r av String.

	// Extra en krypterings algoritm.(Enkel) 



	// Ett s�tt att kolla om user finns i listan eller inte
	// Om inte ett s�tt att l�gga till personen i listan av anv�ndare.


};



