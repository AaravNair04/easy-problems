#include <iostream>
using namespace std;

int main(){
	int angle1, angle2, angle3;
	
	cout << "Enter first angle: ";
	cin >> angle1;
	cout << "Enter second angle: ";
	cin >> angle2;
	cout << "Enter third angle: ";
	cin >> angle3;
	
	int sum = angle1 + angle2 + angle3;
		
	if(sum==180 && angle1>0 && angle2>0 && angle3>0){
		if(angle1==angle2==angle3){
			cout << "Triangle is equilateral";
			return 0;
		} else if(angle1==angle2 || angle2==angle3 || angle3==angle1){
			cout << "Triangle is isoceles";
			return 0;
		} else
			cout << "Triangle is scalene";
	} else 
		cout << "Enter valid angles of a triangle";
	
	return 0;
}