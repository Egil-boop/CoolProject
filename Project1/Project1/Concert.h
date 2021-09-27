#pragma once

#include <iostream>;

namespace std {
	class Concert
	{
	public:
		string getConcertAndLocation();
		Concert(string name, string loc) {
			artistName = name;
			locationName = loc;
		}

	private:
		string artistName;
		string locationName;
		int date; //ers�tt med datum-objekt

	};

}
/*Header f�r konsert-objekt som senare ska visas i n�gon samling
*/



