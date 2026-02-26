#include<iostream>
#include<cstdlib>
#include<iomanip>
using namespace std;

int main(){

    int vehicleType, hours, minute;
    char colon;
    double hourlyRate, parkingFee = 0.0, totalRevenue = 0.0;
    int totalVehicles = 0, paidVehicles = 0, freeVehicles = 0;

    cout << fixed << setprecision(2);
    
    cout << "=====================================\n";
    cout << "     PARKING FEE CALCULATOR\n";
    cout << "=====================================\n\n";

    cout << "Enter vehicle type (1=Car, 2=Truck, -1 to quit): ";
    cin >> vehicleType;



    while (vehicleType != -1){
        if (vehicleType != 1 && vehicleType != 2){
            cout << "Invalid vehicle type! Please enter 1 (Car) or 2 (Truck): ";
            cin >> vehicleType;
            continue;
        }
            cout <<"Enter number of hours parked: ";
            cin >> hours;
    

        if (hours < 0) {
            cout << "Hours cannot be negative! Try again.\n";
            cout << "Enter number of hours parked: ";
            cin >> hours;
            continue;
        }

        if (vehicleType == 1){
            hourlyRate = 2.00;
        } else if (vehicleType == 2){
            hourlyRate = 3.50;
        }

        if (hours <= 1){
            parkingFee = 0.0;
        } else {
            parkingFee = hourlyRate * hours;
            paidVehicles++;
        }

        totalVehicles++;
        totalRevenue += parkingFee;

        cout << "\n-------------------------------------\n";
        cout << "Vehicle: " << (vehicleType == 1 ? "Car" : "Truck") << endl;
        cout << "Hours parked: " << hours << endl;
        cout << "Hourly rate: $" << hourlyRate << endl;
        cout << "Parking fee: $" << parkingFee << endl;
        cout << "Running total revenue: $" << totalRevenue << endl;
        cout << "-------------------------------------\n\n";



}
}
