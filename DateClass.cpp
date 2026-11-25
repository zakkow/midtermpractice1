#include "DateClass.h"
#include <iostream>
#include <string>
using namespace std;

DateClass::DateClass(int M, int D, int Y) {
	Month = M;
	Day = D;
	Year = Y;
}

string DateClass::MonthName() {
	string months[] = {
		"January", "February", "March", "April", 
		"May", "June", "July", "August", 
		"September", "October", "November", "December"
	};

	if (Month >= 1 && Month <= 12) {
		return months[Month - 1];
	}
	return "Invalid Month";
}

void DateClass::PrintMonth() {
	cout << "You Entered: " << MonthName() << " " << Day << ", " << Year << endl;
}
