#include<iostream>
using namespace std;

class member{
    private:
    string name;
    int validitymonths;

    public:
    member(string n,int v){
        name=n;
        validitymonths=v;
    }

    void renew(int extramonths){
        validitymonths+=extramonths;
        cout << name << "'s membership renewed by " << extramonths << " months." << endl;
        cout << "New validity: " << validitymonths << " months" << endl;
        cout << "----------------------------------------" << endl;
    }

        // Function to display details
    void showDetails() {
        cout << "Member Name: " << name << endl;
        cout << "Validity: " << validitymonths << " months" << endl;
        cout << "----------------------------------------" << endl;
    }

};

int main(){
    member m1("ali",4);
    member m2("ahmed",7);

    cout << "Initial membership details!" << endl;
    m1.showDetails();
    m2.showDetails();

    cout <<"Applying Renewal!" <<endl;
    m1.renew(5);
    m2.renew(4);

    return 0;
}