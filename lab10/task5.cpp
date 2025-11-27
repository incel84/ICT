#include <iostream>
using namespace std;

class Patient {
private:
    int age;
    string disease;

public:
    // Setter for age
    void setAge(int a) {
        if (a > 0 && a < 150) {
            age = a;
        } else {
            cout << "Invalid age!" << endl;
        }
    }

    // Getter for age
    int getAge() {
        return age;
    }

    // Setter for disease
    void setDisease(string d) {
        disease = d;
    }

    // Getter for disease
    string getDisease() {
        return disease;
    }
};

int main() {
    Patient p1;

    // Set data using setters
    int age;
    string disease;

    cout << "Enter patient age: ";
    cin >> age;
    cin.ignore();  // clear newline from buffer

    p1.setAge(age);

    cout << "Enter patient disease: ";
    getline(cin, disease);
    p1.setDisease(disease);

    // Print data using getters
    cout << "\nPatient Medical Record:\n";
    cout << "Age: " << p1.getAge() << endl;
    cout << "Disease: " << p1.getDisease() << endl;

    return 0;
}
