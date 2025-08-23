#include <iostream>
using namespace std;

int main(){
	int num;
	
	cout << "Emter a number: ";
	cin >> num;
	
	if (num<=1){
		cout << "Not a prime number";		// All numbers lesser than 1 are not prime
		return 0;
	} else{
		for (int i=2; i<=num/2; i++){
			if(num%i==0){
				cout << num << " is not a prime number";
				return 0;
			}
		}
		cout << num << " is a prime number";
	}
	
	return 0;
}