#include <iostream>
using namespace std;

int main(){
	int num;
	long factorial = 1;			// long is used for data that requires more bits
	
	cout << "Enter number: ";
	cin >> num;
	
	if(num<0){
		cout << "Enter a non negative number";
		return 0;
	} else if (num==0){
		cout << "0! = 1";
		return 0;
	} else{
		for(int i=2; i<=num; i++){
			factorial *= i;
		}
	}
	
	cout << num << "! = " << factorial;
	
	return 0;
}