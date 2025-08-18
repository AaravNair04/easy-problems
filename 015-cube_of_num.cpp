#include <iostream>
using namespace std;

int main(){
	int num;
	cout << "Enter a number: ";
	cin >> num;	
	int cube_num = num*num*num;
	cout << "Cube of " << num << " is " << cube_num;
	return 0;
}