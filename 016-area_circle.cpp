#include <iostream>
#include <cmath>			// set of mathematical functions and constants - eg: pi
using namespace std;

int main(){
	float radius;
	cout << "Enter radius of circle: ";
	cin >> radius;
	
	float area_circle = M_PI * radius * radius;		// area of circle - pi*r^2
	
	cout << "Area of circle with radius " << radius << " is " << area_circle;
	return 0;
}