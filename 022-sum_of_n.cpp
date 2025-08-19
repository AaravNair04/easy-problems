#include <iostream>
using namespace std;

int main(){
	int n, sum=0;
	cout << "How many natural numbers to add: ";
	cin >> n;
	
	for(int i=0; i<=n; i++)
		sum +=i;
	
	cout << "Sum of first " << n << " natural numbers = " << sum << endl;
	return 0;
}