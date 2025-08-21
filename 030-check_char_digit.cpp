#include <iostream>
using namespace std;

int main(){
	char ch;
	
	cout << "Enter a character: ";
	cin >> ch;

	if(ch>='0' && ch<='9')
		cout << "The character is a digit";
	else
		cout << "The character isnot a digit";
	
	return 0;
}