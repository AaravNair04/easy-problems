#include <iostream>
using namespace std;

int main(){
	float num1, num2, num3;
	cout << "Enter first number: ";
	cin >> num1;
	cout << "Enter second number: ";
	cin >> num2;
	cout << "Enter third number: ";
	cin >> num3;
	
	float avg = (num1 + num2 + num3)/3;
	
	cout << "Average: " << avg;
	return 0;
}