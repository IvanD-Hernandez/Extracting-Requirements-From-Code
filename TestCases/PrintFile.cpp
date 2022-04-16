#include <iostream>
#include <fstream>
#include <string>


using namespace std;

int main(int argc, char* argv[]){

	ifstream fileHandle;

	fileHandle.open(argv[1]);

	string fileLine;

	if (fileHandle.is_open()) {
		while(fileHandle){
			getline(fileHandle, fileLine);
			cout << fileLine << "\n";
		}
	}
}