#include <iostream>
using namespace std;

int main () {

	// MAGIC DECIMAL FORMATTING FORMULA
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	double loanAmount = 0.0;
	double interestRate = 0.0;
	double loanDuration = 0.0;

	cout << "Please enter the desired loan amount: $";
	cin >> loanAmount;

	cout << "Please enter the interest rate (ex: 0.15): ";
	cin >> interestRate;

	cout << "Please enter the loan duration (in years): ";
	cin >> loanDuration;

	double faceValue = loanAmount / (1.0 - (interestRate * loanDuration));
	cout << "The face value for this loan would be: $" << faceValue << endl;
	
	double monthlyPayment = (faceValue / (loanDuration * 12));
	cout << "The monthly payment for this loan would be: $" << monthlyPayment << endl;

	return 0;

}
