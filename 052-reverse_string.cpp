#include <iostream>
#include <string>
using namespace std;

int main(){
	string original_string, rev_string;
	cout << "Enter the string: ";
	cin >> original_string;
	
	int length = original_string.length();
	
	for (int i=length-1; i>=0; i--){
		rev_string += original_string[i];
	}
	
	cout << "Reversed String : " << rev_string;
	
	return 0;
}