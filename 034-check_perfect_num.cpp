#include <iostream>
using namespace std;

int main(){
	int num, sumDiv=0;
	
	cout << " Enter a number: ";
	cin >> num;
	
	
	for(int i=1; i<=num/2; i++){			// only till n/2 since there are no possible divisors of num greater than num/2
		if(num%i==0)
			sumDiv+=i;			// add divisor to var
			
	}
	
	if(sumDiv==num)
		cout << num << " is a perfect number";
	else
		cout << num << " is not a perfect number";
	
	return 0;
}