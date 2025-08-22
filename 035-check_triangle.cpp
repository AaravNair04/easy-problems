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
	
	if(angle1<=0 || angle2<=0 || angle3<=0){
		cout << "Invalid angles";
		return 0;
	}
	
	else{	
		int sum = angle1 + angle2 + angle3;
		
		if(sum==180)					// Sum of angles in triangle = 180 
			cout << "Triangle is valid";
		else
			cout << " Triangle is not valid";
	}
	
	
	return 0;
}