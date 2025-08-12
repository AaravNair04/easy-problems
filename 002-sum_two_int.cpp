#include <iostream>

int main(){
	int num1, num2;
	std::cout << "Enter first number: ";		// Asks user for first number
	std::cin >> num1;				// Assigns input to num1
	std::cout << "Enter second number: ";	// Asks user for second number
	std::cin >> num2;				// Assigns input to num2
	std::cout << "Sum of " << num1 <<" and "<< num2 <<" is " << (num1+num2);        // output
}
