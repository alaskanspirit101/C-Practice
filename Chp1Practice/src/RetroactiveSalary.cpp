#include <iostream>
using namespace std;

int main () {

	const double payIncrease = 1.076;
	int originalSalary = 0;
	
	// MAGIC FORMULA FOR DECIMAL FORMATTING TO TWO PLACES
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	cout << "Please input your original annual salary: $";
	cin >> originalSalary;

	double newSalary = static_cast<double>(originalSalary) * payIncrease;
	double newMonthlySalary = newSalary / 12;
	double retroactivePay = (newSalary - originalSalary) * 0.5;

	cout << "The amount of retroactive pay that you can expect is: $" << retroactivePay << endl;
	cout << "Your new annual salary shall be: $" << newSalary << endl;
	cout << "Your new monthly salary shall be: $" << newMonthlySalary << endl;

	return 0;

}
