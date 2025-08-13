#include <iostream>

int main(){
	int cels;
	std::cout << "Enter temperature in celsius: ";		// input from user
	std::cin >> cels;
	float fahr = (cels*1.8)+32;				// convert cels to fahr
	std::cout << "Temperature in fahrenheit: " << fahr;	// output
}