#include<iostream>
#include<iomanip>

using namespace std;

int main() {
    int hour, minute;
    int dayType; // 0 = weekday, 1 = weekend
    int age;
    char colon;
    double basePrice = 0.0;
    double finalPrice = 0.0;
    

    cout <<"Enter Your age: ";
    cin >> age;

    cout << "Enter the time of entry (HH:MM): ";
    cin >> hour >> colon >> minute;
    
    cout << "Enter day type (0 = weekday | 1 = weekend): ";
    cin >> dayType;

    if (dayType == 0){
        if (dayType == 0) { 
        if (hour < 17) { 
            basePrice = 5.50;
        } else if (hour >= 17 && hour < 21) { 
            basePrice = 11.00;
        } else { 
            basePrice = 7.50;
        }
    } else { 
        if (hour < 17) { // 
            basePrice = 7.50;
        } else if (hour >= 17 && hour < 21) { 
            basePrice = 12.50;
        } else { 
            basePrice = 9.50;
        }
}
}
    finalPrice = basePrice;
    
    if (age < 12) {
        finalPrice = basePrice * 0.80;
    } else if (age >= 65) {
        finalPrice = basePrice * 0.65;
    }

cout << "Show Time: ";
    
    
    int displayHour = hour;
    string period = "am";
    
    if (hour == 0) {
        displayHour = 12;
        period = "am";
    } else if (hour == 12) {
        displayHour = 12;
        period = "pm";
    } else if (hour > 12) {
        displayHour = hour - 12;
        period = "pm";
    } else {
        period = "am";
    }
    
    cout << displayHour << ":";
    cout << setw(2) << setfill('0') << minute << " " << period << endl;
    
    cout << "Day Type: ";
    if (dayType == 0) {
        cout << "Weekday" << endl;
    } else {
        cout << "Weekend" << endl;
    }
    
    cout << "Age: " << age << endl;
    cout << fixed << setprecision(2);
    cout << "Final Price: $" << finalPrice << endl;
}

