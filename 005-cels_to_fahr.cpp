#include <iostream>
using namespace std;

int main(){
	int cels;
	cout << "Enter temperature in celsius: ";		// input from user
	cin >> cels;
	float fahr = (cels*1.8)+32;				// convert cels to fahr
	cout << "Temperature in fahrenheit: " << fahr;	// output
	return 0;
}
