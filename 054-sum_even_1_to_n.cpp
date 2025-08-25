#include <iostream>
using namespace std;

int main(){
	int num, sum=0;
	
	cout << "Enter a number: ";
	cin >> num;
	
	if(num<2){
		cout <<0;
		return 0;
	}
	for(int i=2; i<=num; i+=2){
		sum += i;
	}
	
	cout << "Sum of all even numbers from 1 to " << num << " = " << sum;
	
	return 0;
}