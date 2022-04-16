#include <iostream>

using namespace std;

int OneDigit(int num);

int palindromeUtility(int num, int* duplicate);

int isPalindrome(int num);

int main(void){

	int number;

	cout << "Enter integer to check: ";
	cin >> number;

	isPalindrome(number) ? cout << "Yes\n": cout << "No" << endl;

	return 0;
}


int OneDigit(int number){
	return (number >= 0 && number < 10);
}

int palindromeUtility(int number, int* duplicate){
	if(OneDigit(number)){
		return (number == (*duplicate) % 10);
	}

	if (!palindromeUtility(number / 10, duplicate)){
		return false;
	}

	*duplicate /= 10;

	return (number % 10 == (*duplicate) % 10);
}

int isPalindrome(int number){


	if (number < 0){
		number = number * -1;
	}

	int* duplicate = new int(number);

	return palindromeUtility(number, duplicate);
}