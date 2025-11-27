#include <iostream>
using namespace std;

class students{
    public:
    string name;
    int rollnumber;
    void printdetails(){
        cout << "name: " << name << endl;
        cout << "Roll number: " << rollnumber << endl;
        cout << "--------------------------------" << endl;
    }
};

int main(){
    students s1, s2;
    cout << "Enter the name of student 1: " << endl;
    getline(cin,s1.name);

    cout << "Enter the roll number of student 1: " << endl;
    cin >> s1.rollnumber;
    cin.ignore();

    cout << "Enter the name of student 2: " << endl;
    getline(cin,s2.name);

    cout << "Enter the roll number of student 2: " << endl;
    cin >> s2.rollnumber;
    

    cout << "Student details" << endl;
    s1.printdetails();
    s2.printdetails();

    return 0;
}