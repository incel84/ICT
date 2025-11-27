#include <iostream>
using namespace std;

class Book {
private:
    string title;
    double price;   // store price

public:
    // Constructor
    Book(string t, double p) {
        title = t;
        setPrice(p);   // use setter to validate initial price
    }

    // Getter for title
    string getTitle() {
        return title;
    }

    // Getter for price
    double getPrice() {
        return price;
    }

    // Setter for price (safe)
    void setPrice(double p) {
        if (p >= 0) {
            price = p;
        } else {
            cout << "Invalid price! Price cannot be negative." << endl;
        }
    }
};

int main() {
    // Create a book object
    Book b1("C++ Programming", 500);

    cout << "Book: " << b1.getTitle() << endl;
    cout << "Current price: " << b1.getPrice() << endl;

    // Update price safely
    double newPrice;
    cout << "Enter new price: ";
    cin >> newPrice;

    b1.setPrice(newPrice);  // use setter

    cout << "Updated price of " << b1.getTitle() << ": " << b1.getPrice() << endl;

    return 0;
}
