#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int num, power;
	
	cout << "Enter a number: ";
	cin >> num;
	cout << "Enter power of number: ";
	cin >> power;
	
	double exp = pow(num, power);			
	
	cout << num << " to the power " << power << " = " << exp; 
	return 0;
}