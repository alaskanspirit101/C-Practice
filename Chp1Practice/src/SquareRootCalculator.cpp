#include <iostream>
using namespace std;

int main () {

	// Babylonian algorithm for calculating approximate square root of a positive
	// number

	double userInput;

	cout << "Please input a number to start calculating its approx. square root: ";
	cin >> userInput;

	// Make a guess at the answer (n/2)
	double guess = userInput / 2.0;

	for (int i = 0; i < 5; i++) {
		// Compute r = n/guess
		double r = userInput / guess;
		
		// Set guess = (guess + r) / 2
		guess = (guess + r) / 2.0;
	}

	cout << "The approximate square root of " << userInput << " is " << guess << "." << endl;

	return 0;

}
