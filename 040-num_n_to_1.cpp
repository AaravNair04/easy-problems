#include <iostream>
using namespace std;

int main(){
	int limit;
	
	cout << "Enter the limit: ";
	cin >> limit;
	
	for (int i=limit; i>=1; i--)			// limit, limit-1,...,2,1
		cout << i << endl;
		
	return 0;
}