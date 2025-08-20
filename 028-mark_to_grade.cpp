#include <iostream>
using namespace std;

int main(){
	int mark;

	cout << "Enter marks (out of 100): ";
	cin >> mark;
	
	if(mark<0 || mark>100){
		cout << "Enter valid marks";
		return 0;
	}else{
		if(mark>90)
			cout << "A+ Grade";
		else if(mark>80 && mark<=90)
			cout << "A Grade";
		else if(mark>60 && mark<=80)
			cout << "B Grade";
		else if(mark>50 && mark<=60)
			cout << "C Grade";
		else if(mark >=40 && mark<=50)
			cout << "D Grade";
		else
			cout << "Fail";
	}
		
	return 0;
}