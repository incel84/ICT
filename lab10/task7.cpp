#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    string studentID;
    string registeredCourses[5];  // max 5 courses
    int courseCount;              // number of courses registered

public:
    // Constructor
    Student(string n, string id) {
        name = n;
        studentID = id;
        courseCount = 0;
    }

    // Add a course
    void addCourse(string course) {
        if (courseCount < 5) {
            registeredCourses[courseCount] = course;
            courseCount++;
            cout << "Course \"" << course << "\" added successfully." << endl;
            cout << "Slots remaining: " << 5 - courseCount << endl;
        } else {
            cout << "Cannot add course \"" << course << "\". Maximum limit (5) reached." << endl;
        }
        cout << "---------------------------" << endl;
    }

    // Display student details and courses
    void showDetails() {
        cout << "Student Name: " << name << endl;
        cout << "Student ID: " << studentID << endl;
        cout << "Registered Courses (" << courseCount << "): ";
        for (int i = 0; i < courseCount; i++) {
            cout << registeredCourses[i];
            if (i != courseCount - 1) cout << ", ";
        }
        cout << endl << "---------------------------" << endl;
    }
};

int main() {
    // Create a student object
    Student s1("Ali", "U12345");

    // Adding courses
    s1.addCourse("Math");
    s1.addCourse("Physics");
    s1.addCourse("Chemistry");
    s1.addCourse("Biology");
    s1.addCourse("Computer Science");
    s1.addCourse("English");  // This should be rejected

    // Display student details
    s1.showDetails();

    return 0;
}
