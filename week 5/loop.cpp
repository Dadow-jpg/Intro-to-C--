#include<iostream>
#include<iomanip>

using namespace std;

int main() {

    int hour, minute ,dayType, users, totalEntries, freeEntries = 0, paidEntries = 0;
    char colon;
    double finalFee, totalRevenue, usageFee, maintenanceFee = 0.0;

    // ======
    cout <<"Enter day type (0=weekday 1=weekend): ";
    cin>> dayType;

    cout <<"Enter entry time(HH:MM)";
    cin >> hour >> colon >> minute;

    if (dayType == 0){   // weekday

        if (hour <= 6){
            usageFee = 1.50;
    
        }
        else if (hour> 6 && hour <= 9){
            usageFee = 3.75;
        }
        else if(hour > 9 && hour <= 17){
            usageFee = 2.25;
        }
        else{
            usageFee = 2,25;
        }
    }
    else {          // weekends

        if (hour <8 || hour >= 20){
            usageFee = 2.00;
        }
        else {
            usageFee = 3.25;
        }
    }

    cout << fixed <<setprecision(2);
    cout <<"\nBase usage fee: $" << usageFee << endl;

    //--------while loop -----------
    // Sentinel - controlled loop...


    cout << "\nEnter the number of people (-1 to stop): ";
    cin >> users;

    while (users != -1)
    {
        /* ---INPUT VALIDATION */
        if (users < 0){
            cout << "Invalid number . Try again!\n;";
            cout << "entry number of people (-1 to stop): ";
            cin >> users;
            continue;
        }

        totalEntries++;     // tootalEnrty = totalEnrty + 1....

        // CONDITIOAL LOGIC=-------

        if (users >= 3 && dayType ==0 && hour >= 7 && hour <=9 ){
            // Weekday morning group discount
            finalFee = usageFee * 0.5;
            paidEntries++;
        }
        else if (users >= 3 && dayType != 0){
            // Weekend group = free
            finalFee = 0.0;
            freeEntries++;
        }
        else if (users == 1 || users == 2){
            //Small groups pay full price
            finalFee = usageFee;
            paidEntries++;
        }
        else{
            finalFee = 0.0;
            freeEntries++;
        }

        totalRevenue += finalFee;

        // output ...

        cout << "Users: " << users << " |Fee charges $" << finalFee << "| Running total: $" << totalRevenue<< endl;
        cin >> users;
    }

    //For Loop

    for(int i = 0; i < 40; i++){
        cout << "=";

    }

    cout << endl;
    cout <<"SESSION SUMMARY\n";
    cout << "Total entries processed: " << totalEntries << endl;
    cout<< "Paid Entries: " << paidEntries << endl;
    cout<< "Fee Entries: " << freeEntries << endl;
    
    cout<< "Paid Entries Bar: ";
    for (int i = 0; i < paidEntries; i++){
        cout << "#";
    }
    cout << endl;

    cout<< "Fee Entries: ";
    for (int i = 0; i < freeEntries; i++){
        cout << "*";
    }
    cout << endl;

    //for ever payed entry add 1 to every mata fee
    for (int i = 1; i <= paidEntries; i++){

        maintenanceFee++;

        cout <<"\nMAintenance Fee: $"<< maintenanceFee << endl;
        cout <<"\nTotal Revenue Collected: $" << totalRevenue << endl;

    }




}