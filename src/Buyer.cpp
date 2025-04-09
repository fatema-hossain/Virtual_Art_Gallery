#ifndef BUYER_H
#define BUYER_H

#include "User.h"
#include "Artwork.h"

class Buyer : public User {
private:
    std::vector<Artwork*> purchasedArtworks;

public:
    Buyer(std::string id, std::string name, std::string email, std::string password)
        : User(id, name, email, password) {}

    void purchaseArtwork(Artwork* artwork) {
        purchasedArtworks.push_back(artwork);
        std::cout << "Purchased artwork: " << artwork->getTitle() << std::endl;
    }

    void placeBid(Artwork* artwork, double amount) {
        std::cout << "Placed bid of $" << amount << " on artwork: " << artwork->getTitle() << std::endl;
    }

    void update(Notification notification) override {
        addNotification(notification);
    }
};

#endif // BUYER_H