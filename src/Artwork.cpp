#include "Artwork.h"
#include <iostream>

Artwork::Artwork(std::string id, std::string title, std::string artist, double price)
    : artworkId(id), title(title), artistName(artist), price(price) {}

std::string Artwork::getTitle() const {
    return title;
}

double Artwork::getPrice() const {
    return price;
}

void Artwork::displayInfo() const {
    std::cout << "Artwork ID: " << artworkId << "\n"
              << "Title: " << title << "\n"
              << "Artist: " << artistName << "\n"
              << "Price: $" << price << std::endl;
}