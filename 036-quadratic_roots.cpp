#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int a, b, c;
	cout << "Equation is of the form ax^2 +bx +c = 0"<<endl;
	cout << "Enter coefficient of x^2: ";
	cin >> a;
	cout << "Enter coefficient of x: ";
	cin >> b;
	cout << "Enter constant term: ";
	cin >> c;
	
	// equation is of the type - a*x^2 + b*x + c
	
	double d = b*b - 4*a*c;
	
	if(d<0){
		cout << "There exists no real roots for this equation";
		return 0;
	}
	else if(d==0){
		double sol1 = (-b + std::sqrt(d))/(2*a);
		cout << "Roots of equation are: " << sol1 << " and " << sol1;
	}else{
		double sol1 = (-b + std::sqrt(d))/(2*a);
		double sol2 = (-b - std::sqrt(d))/(2*a);
		
		cout << "Roots of equation are: " << sol1 << " and " << sol2;
	}
	
	return 0;
}