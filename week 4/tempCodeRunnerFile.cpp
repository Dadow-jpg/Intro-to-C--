out <<"Parking rate at ";

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

cout <<"is $" << fixed << setprecision(2) << rate <<" per hour" << endl;
}