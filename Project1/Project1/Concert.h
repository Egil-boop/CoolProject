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
		int date; //ersätt med datum-objekt

	};

}
/*Header för konsert-objekt som senare ska visas i någon samling
*/



