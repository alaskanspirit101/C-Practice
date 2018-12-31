#include <iostream>
using namespace std;

int main () {

	double interestRate;
	double principal;
	double monthlyPayment;

	cout << "Please enter the current loan principal: $";
	cin >> principal;

	cout << "Please enter the loan interest rate (ex: 15): ";
	cin >> interestRate;
	interestRate *= 0.01;
	interestRate /= 12.0;

	cout << "Please enter the monthly payment: $";
	cin >> monthlyPayment;

	int monthsToPaid = 0;

	while (principal > 0.0) {
		principal += interestRate * principal;
		principal -= monthlyPayment;
		monthsToPaid++;
	}

	cout << "It will take " << monthsToPaid << " months to pay off "
		<< "this loan." << endl;

	return 0;

}
