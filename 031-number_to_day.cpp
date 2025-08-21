#include <iostream>
#include <string>
using namespace std;

int main(){
	int num;
	
	cout << "Enter a number (1-7): ";
	cin >> num;
	
	std::string days[7] = {"Monday", "Tuesday", "Wednesday" , "Thursday", "Friday", "Saturday", "Sunday"};
	
	if (num<1 || num>7){
		cout << "Enter a valid number";
		return 0;
	} else {
		cout << days[num-1];
	}
	 
	return 0;
}