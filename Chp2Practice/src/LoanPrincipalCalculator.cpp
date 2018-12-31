#include <iostream>
using namespace std;

int main () {

	double principal;
	double interestRate;
	int numberOfMonths;
	double monthlyPayment;

	cout << "Please enter the principal of the loan: $";
	cin >> principal;

	cout << "Please enter the loan interest rate (ex: 15): ";
	cin >> interestRate;
	interestRate *= 0.01;
	interestRate /= 12.0;

	cout << "Please enter the monthly payment: $";
	cin >> monthlyPayment;

	cout << "Please enter the number of future months paid: ";
	cin >> numberOfMonths;

	double paymentMonths = numberOfMonths;

	while ((principal > 0.0) && (paymentMonths > 0)) {
		principal += interestRate * principal;
		principal -= monthlyPayment;
		paymentMonths--;
	}

	if (principal < 0.0) {
		principal = 0.0;
	}

	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	cout << "The principal after " << numberOfMonths << " months would "
		<< "be $" << principal << "." << endl;

	return 0;

}
