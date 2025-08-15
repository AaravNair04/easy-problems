#include <iostream>
using namespace std;

int main(){
	int var1, var2, temp;
	cout << "Enter first number: ";
	cin >> var1;
	cout << "Enter second number: ";
	cin >> var2;
	
	cout << "Initial: (" << var1 << "," << var2 << ") \n";
	
	temp = var1;
	var1 = var2;
	var2 = temp;
	
	cout << "Swapped: (" << var1 << "," << var2 << ")";
	return 0;
}