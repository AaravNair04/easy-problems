#include <iostream>
#include <string>
using namespace std;

int main(){
	int num, len;
	
	cout << "Enter a number: ";
	cin >> num;
	
	std::string s_num = std::to_string(num);
	len = s_num.length();
	
	for(int i=0; i<len; i++){
		if(s_num[i]!=s_num[len-i-1]){
			cout << num << " is not a palindrome";
			return 0;
		}
	}
	
	cout << num << " is a palindrome";
	
	return 0;
}