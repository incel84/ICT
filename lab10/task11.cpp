#include <iostream>
using namespace std;

class WeatherStation {
private:
    double temperature;  // °C
    double humidity;     // %

public:
    // Constructor
    WeatherStation() {
        temperature = 0;
        humidity = 0;
    }

    // Setter for temperature
    void setTemperature(double temp) {
        if (temp >= -50 && temp <= 50) {
            temperature = temp;
        } else {
            cout << "Invalid temperature! Must be between -50°C and 50°C." << endl;
        }
    }

    // Setter for humidity
    void setHumidity(double hum) {
        if (hum >= 0 && hum <= 100) {
            humidity = hum;
        } else {
            cout << "Invalid humidity! Must be between 0% and 100%." << endl;
        }
    }

    // Getters
    double getTemperature() { return temperature; }
    double getHumidity() { return humidity; }

    // Display weather status
    void showWeatherStatus() {
        cout << "Temperature: " << temperature << "°C" << endl;
        cout << "Humidity: " << humidity << "%" << endl;

        // Determine weather condition
        if (temperature < 0) {
            cout << "Weather Condition: Cold" << endl;
        } else if (temperature <= 30 && humidity < 70) {
            cout << "Weather Condition: Mild" << endl;
        } else {
            cout << "Weather Condition: Hot/Humid" << endl;
        }

        cout << "----------------------------" << endl;
    }
};

int main() {
    WeatherStation station;

    double temp, hum;

    cout << "Enter temperature (°C): ";
    cin >> temp;
    station.setTemperature(temp);

    cout << "Enter humidity (%): ";
    cin >> hum;
    station.setHumidity(hum);

    cout << "\nWeather Report:\n";
    station.showWeatherStatus();

    return 0;
}
