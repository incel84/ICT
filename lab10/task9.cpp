#include <iostream>
#include <string>
#include <cctype>   // for isdigit, isalpha
using namespace std;

class Passenger {
private:
    string name;
    int age;
    string seatNumber;

public:
    // Constructor
    Passenger(string n) {
        name = n;
        age = 0;
        seatNumber = "";
    }

    // Setter for age
    void setAge(int a) {
        if (a >= 1 && a <= 120) {
            age = a;
        } else {
            cout << "Invalid age! Must be between 1 and 120." << endl;
        }
    }

    // Setter for seat number (format: number + letter)
    void setSeatNumber(string seat) {
        if (seat.length() >= 2) {
            string numPart = seat.substr(0, seat.length() - 1);
            char letterPart = seat[seat.length() - 1];

            // Check number part
            bool validNum = true;
            for (char c : numPart) {
                if (!isdigit(c)) validNum = false;
            }

            // Check letter part
            if (validNum && isalpha(letterPart)) {
                seatNumber = seat;
            } else {
                cout << "Invalid seat number! Format must be number + letter (e.g., 12A)." << endl;
            }
        } else {
            cout << "Invalid seat number! Format must be number + letter (e.g., 12A)." << endl;
        }
    }

    // Getter methods
    int getAge() { return age; }
    string getSeatNumber() { return seatNumber; }
    string getName() { return name; }

    // Display passenger info
    void showDetails() {
        cout << "Passenger Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Seat Number: " << seatNumber << endl;
        cout << "----------------------------" << endl;
    }
};

int main() {
    // Create a passenger object
    Passenger p1("Ali");

    // Set age
    int age;
    cout << "Enter age for " << p1.getName() << ": ";
    cin >> age;
    p1.setAge(age);

    cin.ignore(); // clear input buffer

    // Set seat number
    string seat;
    cout << "Enter seat number for " << p1.getName() << ": ";
    getline(cin, seat);
    p1.setSeatNumber(seat);

    // Display passenger details
    cout << "\nPassenger Details:\n";
    p1.showDetails();

    return 0;
}
