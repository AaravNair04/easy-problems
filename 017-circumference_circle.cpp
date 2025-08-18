#include <iostream>
#include <cmath>
using namespace std;

int main(){
	float radius, circumference;
	cout << "Enter radius of circle: ";
	cin >> radius;
	
	circumference = 2 * M_PI * radius;
	
	cout << "Circumference of circle with radius " << radius << " is " << circumference;
	return 0;
}