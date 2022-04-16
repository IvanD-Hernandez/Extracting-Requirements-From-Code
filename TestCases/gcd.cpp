#include <iostream>

using namespace std;

int gcd(int a, int b);


int main(void){
	int a ;
	int b;

	cout << "Enter first value: ";
	cin >> a;

	cout << "Enter second value: ";
	cin >> b;
	
	cout << "GCD of " << a << " and " << b << " is " << gcd(a,b) << endl;

	return 0;
}

int gcd(int a, int b){

	if (b == 0){
		return a;
	}

	int temp;
	temp = a % b;

	return gcd(b, temp);
}