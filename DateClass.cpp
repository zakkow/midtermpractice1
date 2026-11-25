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

bool DateClass::isValidDate() {
    if (Month < 1 || Month > 12) {
        return false;
    }
    if (Day < 1 || Day > 31) {
        return false;
    }
    if (Year < 1) {
        return false;
    }
    return true;
}

void DateClass::PrintMonth() {
    if (isValidDate()) {
        cout << "You Entered: " << MonthName() << " " << Day << ", " << Year << endl;
    } else {
        cout << "Invalid date entered. Please check your month, day, and year." << endl;
    }
}
