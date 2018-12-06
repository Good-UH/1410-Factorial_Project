/*
Wednesday, September 5, 2014
Factorial project used to show recursion in c++
*/

#include <iostream>
using namespace std;

void main() {
	//Define variables
	int userInput;
	long sum;

	//Initialize
	userInput = 0;
	sum = 0;

	//Get userInput
	cout << "Enter a number. \n";
	cout << "\n\tYour Number: ";
	cin >> userInput;
	sum = 1;

	if (userInput < 0) { //Data Validation
		cout << "\n\t Error: Please enter a Valid Number! \n";
	}
	else {
		for (int iteration = 0; iteration <= userInput; iteration++) {
			switch (iteration) {
			case 0: case 1:
				sum = 1;
				break;
			default:
				sum = sum * iteration;
			}
			cout << "\n\t" << userInput << "!= " << sum << endl;
		}
	}
	cout << endl;
	system("pause");
}