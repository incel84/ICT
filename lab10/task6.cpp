#include <iostream>
using namespace std;

class EmployeeAttendance {
private:
    string employeeName;
    string clockIn;
    string clockOut;

public:
    // Constructor to set timestamps (once)
    EmployeeAttendance(string name, string inTime, string outTime) {
        employeeName = name;
        clockIn = inTime;
        clockOut = outTime;
    }

    // Getter for employee name
    string getName() {
        return employeeName;
    }

    // Getter for clock-in time
    string getClockIn() {
        return clockIn;
    }

    // Getter for clock-out time
    string getClockOut() {
        return clockOut;
    }

    // Display attendance
    void displayAttendance() {
        cout << "Employee: " << employeeName << endl;
        cout << "Clock In: " << clockIn << endl;
        cout << "Clock Out: " << clockOut << endl;
        cout << "---------------------------" << endl;
    }
};

int main() {
    // Create employee attendance records
    EmployeeAttendance e1("Ali", "09:00 AM", "05:00 PM");
    EmployeeAttendance e2("Ayesha", "09:30 AM", "05:30 PM");

    // Display attendance logs
    cout << "Attendance Records:\n";
    e1.displayAttendance();
    e2.displayAttendance();

    return 0;
}
