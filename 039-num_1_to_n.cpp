#include <iostream>
using namespace std;

int main(){
	int limit;
	
	cout << "Enter the limit: ";
	cin >> limit;
	
	for (int i=1; i<=limit; i++)			// 1,2,3,...limit
		cout << i << endl;
		
	return 0;
}