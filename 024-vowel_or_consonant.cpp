#include <iostream>
using namespace std;

int main(){
	char ch;
	char vowel[] = {'a','A','e','E','i','I','o','O','u','U'};		// Array of all vowels (upper and lowercase)
	cout << "Enter a letter: ";
	cin >> ch;
	
	if(ch>='a' && ch<='z' || ch>='A' && ch<='Z'){				// Includes all lower and uppercase letters
		for(int i=0; i<10; i++)
			if (ch==vowel[i]){					// Checks if input is in vowel array
				cout << ch << " is a vowel";
				return 0;
			}
		cout << ch << " is a consonant";				// Input not in vowel array
	} else
		cout << "Invalid Entry";					// Input was not a letter
	return 0;
}