#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    string studentID;
    string meals[3];  // maximum 3 meals
    int mealCount;    // number of meals booked

public:
    // Constructor
    Student(string n, string id) {
        name = n;
        studentID = id;
        mealCount = 0;
    }

    // Add a meal
    void addMeal(string meal) {
        if (mealCount < 3) {
            meals[mealCount] = meal;
            mealCount++;
            cout << "Meal \"" << meal << "\" booked successfully." << endl;
            cout << "Remaining meal slots: " << 3 - mealCount << endl;
        } else {
            cout << "Cannot book \"" << meal << "\". Maximum meal limit (3) reached." << endl;
        }
        cout << "----------------------------" << endl;
    }

    // Show student details and booked meals
    void showMeals() {
        cout << "Student Name: " << name << endl;
        cout << "Student ID: " << studentID << endl;
        cout << "Booked Meals (" << mealCount << "): ";
        for (int i = 0; i < mealCount; i++) {
            cout << meals[i];
            if (i != mealCount - 1) cout << ", ";
        }
        cout << endl << "----------------------------" << endl;
    }
};

int main() {
    // Create a student object
    Student s1("Ayesha", "U1002");

    // Book meals
    s1.addMeal("Monday: Sandwich");
    s1.addMeal("Tuesday: Pasta");
    s1.addMeal("Wednesday: Salad");
    s1.addMeal("Thursday: Pizza"); // Should be rejected

    // Show booked meals
    s1.showMeals();

    return 0;
}
