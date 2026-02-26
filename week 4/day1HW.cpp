#include<iostream>
#include<iomanip>

using namespace std;
int main(){                    /*Entry time in 24-hour format (HH:MM)*/
    int hour, minute, numPeople;
    bool dayType;
    double rate;  // Hourly parking rate
    char colon;


    cout << "Enter the time of entry (HH:MM): ";
    cin >> hour >> colon >> minute;
    
    cout <<"Enter the number of people: ";
    cin >> numPeople;

    cout << "Enter day type (0 = weekday | 1 = weekend): ";
    cin >> dayType;

    if (dayType == 0){     // weakday
      if (hour <= 5){
        rate = 2.00;
    } else if (hour > 5 && hour <= 9){
        rate = 5.00;
    } else if (hour > 9 && hour <= 17){
        rate = 3.00;
    } else {
        rate = 2.50;
    }

    } else if (dayType != 0) {
     if (hour < 8){
        rate = 1.00;
    } else if (hour >=8 && hour <= 18){  
        rate = 4.50;
    } else{
        rate = 3.00;
    }

}

cout <<"Fitness Center Entry Fee: ";

if (hour == 0){
    cout << "12:";
} else if (hour <= 12){
    cout << hour << ":";
} else {
    cout << hour -12 << ":";
}

cout << setw(2) << setfill ('0') << minute;

if (hour < 12){
    cout << " am";
} else {
    cout << " pm";
}

cout <<" is $" << fixed << setprecision(2) << rate <<" per hour" << endl;

}
