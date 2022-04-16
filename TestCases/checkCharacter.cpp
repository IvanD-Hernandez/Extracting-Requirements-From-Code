#include <iostream>

using namespace std;

int main(void){


	char c;

	bool isLowercaseVowel;
	bool isUppercaseVowel;

	cout << "Enter an alphabetical character to check: ";
	cin >> c;

	isLowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
	isUppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');


	if(!isalpha(c)){
		cout << c << " is not an alphabetical character" << endl;
	}

	else if(isLowercaseVowel || isUppercaseVowel){
		cout << c << " is a vowel" << endl;
	}

	else{
		cout << c << " is a consonant" << endl;
	}
	return 0;
}