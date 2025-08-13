#include <iostream>

int main(){
	int num;
	std::cout << "Enter any integer: ";
	std::cin >> num;
	if (num>0)
		std::cout << num << " is a positive number";
	else if (num<0)
		std::cout << num << " is a negative number";	
	else
		std::cout << "Number is zero";			// neither negative nor positive
	return 0;
}