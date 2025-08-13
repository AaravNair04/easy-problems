#include <iostream>

int main(){
	int principal, rate, time;
	std::cout << "Enter initial Principal: ";
	std::cin >> principal;
	std::cout << "Enter annual interest rate: ";
	std::cin >> rate;
	std::cout << "Enter time(in years): ";
	std::cin >> time;
	int simple_interest = (principal*rate*time)/100;
	std::cout << "Simple interest earned on a principal of " << principal << " rupees with an annual interest rate of " << rate << " percent after a time period of " << time << " years is: " <<simple_interest;
}