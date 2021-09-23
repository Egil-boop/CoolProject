#pragma once
#include <iostream>
#include <fstream>
#include "User.h"; // <-- För att kunna komma åt User konstruktorn.
#include <map>;
namespace std
{
	class Login
	{
	public:
		

		Login(string name, string pass) {



		User user(name, pass); //Skapar en ny instance.

			

			//Hämta listan med alla namn och lösenord från en fil.


		}


		// Hitta rätt user i textfilen och sedan lägg in det i en mapp med keys och ha username som nyckel och password som value. Sedan kan man kolla om det man
		// har skrivit in stämmer med vad man har i sin map.
		void readUserDataBase(string user, string password);


	private:
		map <string, string > userDataBase;
		string username;
	

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



}