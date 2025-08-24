#include <iostream>
using namespace std;

int main(){
	int limit;
	
	cout << "Enter no. of terms: ";
	cin >> limit;
	
	long fibnm1 = 0;			// fibonacci series first term
	long fibnm2 = 1;			// fibonacci series second term
	
	if (limit<1){
		cout << "Enter a positive number";
		return 0;
	} else if (limit==1)
		cout << fibnm1 << endl;
	else{
		cout << fibnm1 << endl;
		cout << fibnm2 << endl;
		long fib;
		while(limit-3>=0){
			fib = fibnm1 + fibnm2;		// fibonacci = fibonacci(n-1) + fibonacci(n-2)
			cout << fib << endl;
			fibnm1 = fibnm2;		// fibonacci(n-1) = fibonacci(n-2)
			fibnm2 = fib;			// fibonacci(n-2) = fibonacci(n)
			limit--;
		}
	}
	
	return 0;
}