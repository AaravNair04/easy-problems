#include <iostream>
using namespace std;

int main(){
	int limit, count;
	bool isPrime;
	
	cout << "Enter limit: ";
	cin >> limit;
	
	if(limit<=1)
		cout << "There exist no prime numbers up till " << limit;
	else{
		cout << "[";
		for (int i=2; i<=limit; i++){
			isPrime=true;
			for (int j=2; j*j<=i; j++){
				if(i%j==0){
					isPrime = false;
					break;
				}
			}
			if(isPrime){
				cout << i << " ";
				count++;
			}
		}
	}
	
	cout << "]\nThere exist " << count << " prime numbers upto " << limit;
	
	return 0;
}