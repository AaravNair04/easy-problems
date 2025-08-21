#include <iostream>
using namespace std;

int main(){
	float units, bill;
	
	cout << "Enter electricity units consumed: ";
	cin >> units;
	
	if(units>=0 && units<=50)
		bill = 45 + (3.3 * units);
	else if(units>50 && units<=100)
		bill= 75 + (4.15 * units);
	else if(units>100 && units<=150)
		bill= 95 + (5.25 * units);
	else if(units>150 && units<=200)
		bill= 130 + (7.10 * units);
	else if(units>200 && units<=250)
		bill= 145 + (8.35 * units);
	else if(units>250 && units<=300)
		bill= 190 + (6.55 * units);
	else if(units>300 && units<=350)
		bill= 215 + (7.4 * units);
	else if(units>450 && units<=100)
		bill= 235 + (7.75 * units);
	else if(units>400 && units<=500)
		bill= 265 + (8.05 * units);
	else if(units>500)
		bill= 290 + (9 * units);
	else{
		cout << "Enter a valid number";
		return 0;
	}		
	cout << "Electricity Bill : " << bill;
	
	return 0;
}