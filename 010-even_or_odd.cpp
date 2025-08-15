#include <iostream>
using namespace std;

int main(){
	int num;
	cout << "Enter a number: ";
	cin >> num;
	if (num%2==0)					// checks remainder upon dividing with 2
		cout << num << " is even.";		// if remainder is zero, number is divisible by 2. Hence even
	else
		cout << num << " is odd.";		// if remainder is one, number is not divisible by 2. Hence odd
	return 0;
}