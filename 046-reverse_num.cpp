#include <iostream>
using namespace std;

int main(){
	long long num;
	
	cout << "Enter a number: ";
	cin >> num;
	
	int digit;				// variable to store the digit
	long long r_num=0;			// variable to store reversed number
	while(num>0){
		digit = num%10;
		r_num += digit;
		r_num *= 10;			// increases place of digit
		num = num - digit;		// subtracts digit at unit place
		num /= 10;			// removes the zero at units place
	}
	
	cout << "Reversed Number: " << r_num/10;
	
	return 0;
}