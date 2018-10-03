#include <iostream>
#include <string>
#include <list>

int main() {
	std::string userString;
	std::string orderedString = "";
	std::string listFront;
	std::size_t stringPosition;

	std::list<std::string> orderedList = { "A", "a", "B", "b", "C", "c", "D", "d", "E", "e", "F", "f", "G", "g", "H", "h", "I", "i", "J", "j", "K", "k", "L", "l", "M", "m", "N", "n", "O", "o", "P", "p", "Q", "q", "R", "r", "S", "s", "T", "t", "U", "u", "V", "v", "W", "w", "X", "x", "Y", "y", "Z", "z", "0", "1", "2", "3", "4", "5", "6", "7", "8", "9" };//Initializes our list in the order we would like to alphabetize 

	std::cout << "Enter some letters (A-z) and numbers (0-9): ";
	std::getline (std::cin, userString);

	while (!orderedList.empty()) {
		listFront = orderedList.front();//First string in our list

		stringPosition = userString.find(listFront);//Finds the first instance of the string in the user's input

		if (stringPosition!=std::string::npos) {
			orderedString += listFront;//Adds the string to our ordered string variable
			userString.erase(stringPosition, 1);//Erases the string from the user's input
		} else {
			orderedList.pop_front();//Pops off the front of our ordered list if it doesn't match anything in the user's input
		}
	}

	std::cout << orderedString;

	return 0;
}