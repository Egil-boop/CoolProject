#pragma once
#include <iostream>
#include <fstream>
#include "User.h"; // <-- F�r att kunna komma �t User konstruktorn.
#include <map>;
namespace std
{
	class Login
	{
	public:
		

		Login(string name, string pass) {



		User user(name, pass); //Skapar en ny instance.

			

			//H�mta listan med alla namn och l�senord fr�n en fil.


		}


		// Hitta r�tt user i textfilen och sedan l�gg in det i en mapp med keys och ha username som nyckel och password som value. Sedan kan man kolla om det man
		// har skrivit in st�mmer med vad man har i sin map.
		void readUserDataBase(string user, string password);


	private:
		map <string, string > userDataBase;
		string username;
	

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



}