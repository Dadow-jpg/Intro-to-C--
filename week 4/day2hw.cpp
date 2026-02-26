#include<iostream>
#include <string>
#include<cmath>
using namespace std;

int main(){
      
    cout << endl << "=== Task 1: Username Check ===" << endl;

    string username;
    cout << "Enter username: ";
    getline(cin, username);

    int findPos = username.find("admin");

    if ( findPos != string::npos){
        cout << "Username is valid (contains 'admin')" << endl;
    } else {
        cout << "Username is invalid (does not contain 'admin')" << endl;
    }

    // ====== task 2: sensor accuracy Check ======
    cout << endl << "=== Task 2: Sensor Accuracy Check ===" << endl;

    double expectedValue = 25.0;
    double sensorReading;

    cout << "Enter sensor reading: ";
    cin >> sensorReading;

    double difference = sensorReading - expectedValue;
    if (difference < 0) difference = -difference;

    if (difference <= 0.05){
        cout << "Sensor reading is acceptable (within ±0.05)" << endl;
    } else {
        cout << "Sensor reading is not acceptable" << endl;
    }

    // ====== task 3: Boolean logic + Short-circuit ======
    cout << endl << "=== Task 3: System Status ===" << endl;

    bool usernameValid = (findPos != string::npos);
    bool sensorAccurate = (difference <= 0.05);

    if (usernameValid && sensorAccurate){
        cout << "System Authorized" << endl;
    } else {
        cout << "Access Denied" << endl;
    }
    }

