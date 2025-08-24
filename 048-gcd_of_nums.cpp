#include <iostream>
using namespace std;

int main(){
	int num1, num2, temp1, temp2;
	
	cout << "Enter two numbers: ";
	cin >> num1 >> num2;
	temp1 = num1;
	temp2 = num2;
	
	cout << "G.C.D of " << num1 << " and " << num2 << " = ";
	
	// Euclidean algorithm : If there are any two integers a and b, there exists q and r such that it satisfies 		
	// the given condition a = bq + r where 0 ≤ r < b. Putting it in a loop (a=b, b=r), we get
	
	int remainder;
	
	while(temp2 != 0){
		remainder = temp1 % temp2;		// remainder
		temp1 = temp2;
		temp2 = remainder;
	}
	
	cout << temp1;
	
	return 0;
}