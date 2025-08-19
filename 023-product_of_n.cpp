#include <iostream>
using namespace std;

int main(){
	int n, product=1;
	
	cout << "Till which number to multiply: ";
	cin >> n;
	
	for(int i=1; i<=n; i++)
		product = product * i;
		
	cout << "Product of first " << n << " natural numbers = " << product;
	
	return 0;
}