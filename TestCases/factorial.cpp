#include <iostream>

using namespace std;

int main(){

	int user_input;

	long double factorial = 1.0;

	cout << "Enter a value to calculate: ";
	cin >> user_input;

	if (user_input < 0){
		cout << "Cannot calculate factorial of a negative number" << endl;
	}

	else {

		for(int i = 1; i <= user_input; i++){
			factorial = factorial * i;
		}

		cout << "Factorial of " << user_input << " = " << factorial << endl;
	}

	return 0;
}