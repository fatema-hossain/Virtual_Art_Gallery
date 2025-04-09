#ifndef ADMIN_H
#define ADMIN_H

#include "User.h"
#include "Artwork.h"

class Admin : public User {
public:
    Admin(std::string id, std::string name, std::string email, std::string password)
        : User(id, name, email, password) {}

    void approveArtwork(Artwork* artwork) {
        std::cout << "Artwork approved: " << artwork->getTitle() << std::endl;
    }

    void removeUser(User* user) {
        std::cout << "User removed: " << user->getName() << std::endl; // ✅ No more errors!
    }

    void notifyAllUsers(Notification notification) {
        std::cout << "Notification sent to all users: " << notification.getMessage() << std::endl;
    }

    void update(Notification notification) override {
        addNotification(notification);
    }
};

#endif // ADMIN_H