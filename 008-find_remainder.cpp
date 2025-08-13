#include <iostream>

int main(){
	int dividend, divisor;
	std::cout << "Enter dividend: ";
	std::cin >> dividend;
	std::cout << "Enter divisor: ";
	std::cin >> divisor;
	int remainder = dividend % divisor;		// '%' - gives remainder
	std::cout << dividend << " divided by " << divisor << " gives a remainder '" << remainder <<"'";
}