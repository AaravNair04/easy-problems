#include <iostream>
using namespace std;

int main(){
	long long num, sum_cubes;
	long long cube, last_digit;
	
	cout << "Enter a number: ";
	cin >> num;
	
	// A number is an armstrong number if the sum of the cubes of the digits = number;
	
	long long temp = num;
	
	while(temp>0){
		last_digit = temp%10;
		cube = last_digit * last_digit * last_digit;
		sum_cubes += cube;
		temp = temp/10;
	}
	
	if(num==sum_cubes)
		cout << num << " is an armstrong number";
	else
		cout << num << " is NOT an armstrong number";
	
	return 0;
}