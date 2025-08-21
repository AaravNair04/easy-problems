#include <iostream>
using namespace std;

int main(){
	char ch;

	cout << "Enter character: ";
	cin >> ch;
	
	if((int('A')<=int(ch) && int('Z')>=int(ch)) || (int('a')<=int(ch) && int('z')>=int(ch)))
		cout << "Character is an alphabet";
	else
		cout << "Character is not an alphabet";
		
	return 0;
}