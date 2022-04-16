#include <iostream>
#include <cmath>

using namespace std;

float calculateStdDev(float data[]);

int main(void){

	int i;
	float data[10];

	float result;
	cout << "Enter 10 numbers: ";
	for(i=0;i<10;i++){
		cin >> data[i];
	}

	result = calculateStdDev(data);
	
	cout << endl << "Standard Deviation: " << result << endl;


	return 0;
}

float calculateStdDev(float data[]){

	float sum = 0.0;
	float mean;
	float stddev = 0.0;

	int i;

	for(i = 0; i < 10; i++){
		sum += data[i];
	}

	mean = sum / 10;

	for (i = 0; i < 10; i++){
		stddev += pow(data[i] - mean, 2);
	}

	return sqrt(stddev / 10);
}