#include "pch.h"
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int clockedSpeed;
	int limitSpeed;
	int milesOverLimit;
	int fine;
	cout << setprecision(2) << fixed;
	cout << "Enter the speed limit: ";
	cin >> limitSpeed;
	cout << "Enter the clocked speed: ";
	cin >> clockedSpeed;
	if (clockedSpeed > limitSpeed) {
		milesOverLimit = clockedSpeed - limitSpeed;
		fine = 50 + milesOverLimit * 5;
		cout << "The clocked speed is:       Illegal" << endl;
		cout << "Miles over the speed limit: " << milesOverLimit << endl;
		if (clockedSpeed > 85) {
			fine = fine + 250;
			cout << "Driving over 85mph:         Yes" << endl;
			cout << "The fine is:                $" << fine << endl;
		}
		else {
			cout << "Driving over 85mph:         No" << endl;
			cout << "The fine is:                $" << fine << endl;
		}
	}
	else {
		milesOverLimit = clockedSpeed - limitSpeed;
		fine = 0;
		cout << "The clocked speed is:       Legal" << endl;
		cout << "Miles over the speed limit: " << milesOverLimit << endl;
		cout << "Driving over 85mph:         No" << endl;
		cout << "The fine is:                $" << fine << endl;
	}
	if (fine < 0) {
		fine = 0;
		}
	else {
		fine = fine;
	}
}