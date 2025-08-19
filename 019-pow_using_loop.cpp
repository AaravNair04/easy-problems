#include <iostream>
using namespace std;

int main(){
	int num, power, exp=1;
	cout << "Enter a number: ";
	cin >> num;
	cout << "Enter power: ";
	cin >> power;
	
	for(int i=1; i<=power; i++){		// i = 1,2,....,power
		exp *= num;			// multiples num 'power' times
	}
	
	cout << num << " to the power " << power << " = " << exp;
	
	return 0;
}