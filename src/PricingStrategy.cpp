#include "PricingStrategy.h"
#include <iostream>

void FixedPrice::setPrice(double price) {
    this->price = price;
}

double FixedPrice::getPrice() const {
    return price;
}

void Auction::setPrice(double startingBid) {
    this->startingBid = startingBid;
}

double Auction::getPrice() const {
    return startingBid;
}