#include <iostream>

int main(){
	std::string name;				// declare string variable
	std::cout << "Enter your name: ";		// input from user
	std::cin >> name;				// store input in string variable
	std::cout << "Hello, " << name << "!"; 		// output
	return 0;
}