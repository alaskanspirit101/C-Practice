#include <iostream>
#include <math.h>
using namespace std;

int main () {

	const double freefallAcc = 32.0;

	double secondsInFreefall = 0.0;

	cout << "Please enter the number of seconds that the object is in freefall: ";
	cin >> secondsInFreefall;

	double distance = 0.5 * freefallAcc * pow(secondsInFreefall, 2.0);

	cout << "The object fell " << distance << " feet in " << secondsInFreefall << " seconds."
		<< endl;

	return 0;

}
