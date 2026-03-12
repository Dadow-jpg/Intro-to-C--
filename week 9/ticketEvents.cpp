#include<iostream>
#include "ticketing.h"

double calculatePrice(double basePrice, double fee){
// error checking
    if (basePrice <0)
        return 0.0;
    double total = basePrice + fee;
    return total;


}

// overlading function

double calculatePrice(double basePrice, string vipTier){
    if(vipTier == "Backstage")
        return basePrice + 500.0;
    if (vipTier == "FrontRow")
        return basePrice + 200.0;
        return basePrice;
    
}

bool isValidSection(int section){
    if (section >= 100 && section <= 500)
        return true;
}


