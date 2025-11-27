#include <iostream>
using namespace std;

class Movie {
private:
    string title;
    double price;  // price in dollars

public:
    // Constructor
    Movie(string t, double p) {
        title = t;
        setPrice(p);  // use setter to ensure valid price
    }

    // Getter for title
    string getTitle() {
        return title;
    }

    // Getter for price
    double getPrice() {
        return price;
    }

    // Setter for price (ensures price is not negative)
    void setPrice(double p) {
        if (p >= 0) {
            price = p;
        } else {
            cout << "Invalid price! Price cannot be negative." << endl;
        }
    }
};

int main() {
    // Create a movie object
    Movie m1("Inception", 4.99);

    cout << "Movie: " << m1.getTitle() << endl;
    cout << "Current rental price: $" << m1.getPrice() << endl;

    // Update the movie price
    double newPrice;
    cout << "Enter new rental price: $";
    cin >> newPrice;

    m1.setPrice(newPrice);  // only update through setter

    cout << "Updated rental price of " << m1.getTitle() << ": $" << m1.getPrice() << endl;

    return 0;
}
