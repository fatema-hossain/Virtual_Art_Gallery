#ifndef ARTWORK_H
#define ARTWORK_H

#include <string>

class Artwork {
protected:
    std::string artworkId;
    std::string title;
    std::string artistName;
    double price;

public:
    Artwork(std::string id, std::string title, std::string artist, double price);
    
    std::string getTitle() const;
    double getPrice() const;
    void displayInfo() const;
};

#endif // ARTWORK_H