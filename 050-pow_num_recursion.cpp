#include <iostream>
using namespace std;

long long power_num_recursion(int num, int power){
	if (power==0)
		return 1;
	long long exp = num * power_num_recursion(num, power-1);
	return exp;
}

int main(){
	int num, power;
	
	cout << "Enter number: ";
	cin >> num;
	cout << "Enter power: ";
	cin >> power;
	
	long long exp = power_num_recursion(num, power);
	
	cout << exp;
	
	return 0;
}