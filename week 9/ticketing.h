#ifndef TICKET_H
#define TICKET_H

#include<string>
using namespace std;

double calculatePrice(double basePrice, double fee = 10.0);

double calculatePrice(double basePrice, string vipTier);

bool isValidSection(int section);



#endif