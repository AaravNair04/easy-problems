#include <iostream>
using namespace std;

int main(){
	int year, leap=0;
	cout << "Enter year: ";
	cin >> year;
	
	if (year%4==0 && year%100!=0)
		leap=1;
	
	else if (year%400==0)
		leap=1;
	
	if (leap==1)
		cout << year << " is a leap year";		
	else
		cout << year << " is not a leap year";		
	return 0;
}