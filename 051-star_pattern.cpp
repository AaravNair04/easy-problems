#include <iostream>
using namespace std;

void starTriangle(int rows){
	for(int i=1; i<=rows; i++){			
		for(int j=1; j<=i; j++)
			cout << "* ";			// stars * iteration
		cout <<"\n";				// new row
	}
}

void starPyramid(int rows){
	for(int i=1; i<=rows; i++){
		for(int j=1; j<=rows-i; j++)
			cout << " ";
		for(int k=1; k<=2*i-1; k++)
			cout << "*";
		cout << "\n";
	}
}


int main(){
	int rows;
	
	cout << "Enter number of rows: ";
	cin >> rows;
	
	starTriangle(rows);
	starPyramid(rows);
	
	return 0;
}