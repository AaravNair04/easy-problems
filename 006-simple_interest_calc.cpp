#include <iostream>
using namespace std;

int main(){
	int principal, rate, time;
	cout << "Enter initial Principal: ";
	cin >> principal;
	cout << "Enter annual interest rate: ";
	cin >> rate;
	cout << "Enter time(in years): ";
	cin >> time;
	int simple_interest = (principal*rate*time)/100;
	cout << "Simple interest earned on a principal of " << principal << " rupees with an annual interest rate of " << rate << " percent after a time period of " << time << " years is: " <<simple_interest;
	return 0;
} 
