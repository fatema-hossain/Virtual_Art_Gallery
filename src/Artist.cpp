#ifndef ARTIST_H
#define ARTIST_H

#include "User.h"
#include "Artwork.h"
#include <vector>

class Artist : public User {
private:
    std::vector<Artwork*> artworks;

public:
    Artist(std::string id, std::string name, std::string email, std::string password)
        : User(id, name, email, password) {}

    void uploadArtwork(Artwork* artwork) {
        artworks.push_back(artwork);
        std::cout << "Artwork uploaded: " << artwork->getTitle() << std::endl;
    }

    void viewSales() const {
        std::cout << "Viewing sales history for artist: " << name << std::endl;
    }

    void update(Notification notification) override {
        addNotification(notification);
    }
};

#endif // ARTIST_H