#include <iostream>
using namespace std;

int main(){
	int num1, num2, num3;
	cout << "Enter three DISTINCT numbers" << endl;
	cout << "Enter first number: ";
	cin >> num1;
	cout << "Enter second number: ";
	cin >> num2;
	cout << "Enter third number: ";
	cin >> num3;
	
	if(num1>num2){
		if(num1>num3)
			cout << num1 << " is the greatest number";
		else
			cout << num3 << " is the greatest number";
	} else{
		if(num2>num3)
			cout << num2 << " is the greatest number";
		else
			cout << num3 << " is the greatest number";
	}
	return 0;
}