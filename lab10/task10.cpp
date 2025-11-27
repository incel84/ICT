#include <iostream>
using namespace std;

class PatientMonitor {
private:
    int heartRate;       // beats per minute
    int oxygenLevel;     // percentage

public:
    // Constructor
    PatientMonitor() {
        heartRate = 0;
        oxygenLevel = 0;
    }

    // Setter for heart rate
    void setHeartRate(int hr) {
        if (hr >= 30 && hr <= 180) {
            heartRate = hr;
        } else {
            cout << "Invalid heart rate! Must be 30–180 bpm." << endl;
        }
    }

    // Setter for oxygen level
    void setOxygenLevel(int ox) {
        if (ox >= 50 && ox <= 100) {
            oxygenLevel = ox;
        } else {
            cout << "Invalid oxygen level! Must be 50–100%." << endl;
        }
    }

    // Show patient status
    void showStatus() {
        cout << "Heart Rate: " << heartRate << " bpm" << endl;
        cout << "Oxygen Level: " << oxygenLevel << "%" << endl;

        if (oxygenLevel < 80) {
            cout << "Status: Critical Alert" << endl;
        } else if (heartRate < 40 || heartRate > 150) {
            cout << "Status: Abnormal Heart Rate" << endl;
        } else {
            cout << "Status: Stable" << endl;
        }

        cout << "----------------------------" << endl;
    }
};

int main() {
    PatientMonitor p1;

    int hr, ox;

    cout << "Enter heart rate (bpm): ";
    cin >> hr;
    p1.setHeartRate(hr);

    cout << "Enter oxygen level (%): ";
    cin >> ox;
    p1.setOxygenLevel(ox);

    cout << "\nPatient Status:\n";
    p1.showStatus();

    return 0;
}
