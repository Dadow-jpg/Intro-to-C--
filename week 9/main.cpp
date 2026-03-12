#include <iostream>
#include "ticketing.h"
#include "ticketEvents.cpp"
 
int main()
{
    cout << "----- Campus Fesival ticketing -----" << endl;

    double general = calculatePrice(50.0);

    cout << " general Admission: $ " << general << endl;
    // text function overload
    double vip = calculatePrice(50.0, "FrontRow");
    cout << "VIP admission : $"<< vip << endl;

    //
    int userSection = 99;
    if (!isValidSection (userSection))
        cout << "Error: Section " << userSection << " does not exist!" << endl;

}