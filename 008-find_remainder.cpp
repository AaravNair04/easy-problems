#include <iostream>
using namespace std;
 
int main(){
	int dividend, divisor;
	cout << "Enter dividend: ";
	cin >> dividend;
	cout << "Enter divisor: ";
	cin >> divisor;
	
	int remainder = dividend % divisor;		// '%' - gives remainder
	
	cout << dividend << " divided by " << divisor << " gives a remainder '" << remainder <<"'";
	
	return 0;
}
