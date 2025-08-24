#include <iostream>
using namespace std;

int main(){
	long num;
	
	cout << "Enter a number: ";
	cin >> num;
	
	int digit, sum=0;		// variable to store the digit and sum
	
	while(num>0){
		digit = num%10;
		sum += digit;
		num = num - digit;		// subtracts digit at unit place
		num /= 10;			// removes the zero at units place
	}
	
	cout << "Sum: " << sum;
	
	return 0;
}