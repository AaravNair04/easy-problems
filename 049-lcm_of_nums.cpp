#include <iostream>
using namespace std;

int main(){
	int num1, num2, temp1, temp2,remainder, gcd, lcm;
	
	cout << "Enter two numbers: ";
	cin >> num1 >> num2;
	
	temp1 = num1;
	temp2 = num2;
	
	while(temp2 != 0){
		remainder = temp1 % temp2;		// remainder
		temp1 = temp2;
		temp2 = remainder;
	}
	
	gcd = temp1;
	
	lcm = (num1 * num2) / gcd;			// num1 * num2 = gcd * lcm
	
	cout << "L.C.M of " << num1 << " and " << num2 << " = " << lcm;
	
	return 0;
}