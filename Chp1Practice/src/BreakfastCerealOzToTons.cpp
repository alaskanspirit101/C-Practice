#include <iostream>
using namespace std;

int main() {

	const double metricTonInOz = 35273.92;
	double cerealInOz = 0.0;

	cout << "Please give the weight of a box of breakfast cereal in ounces: ";
	cin >> cerealInOz;

	double cerealInTons = cerealInOz / metricTonInOz;
	cout << "This breakfast cereal weighs " << cerealInTons << " tons." << endl;
	
	double numberOfBoxes = metricTonInOz / cerealInOz;
	cout << "The number of boxes needed to equal a ton would be " << numberOfBoxes << "." << endl;

	return 0;

}
