#ifndef USER_H
#define USER_H

#include <string>
#include <vector>
#include <iostream>
#include "Notification.h"

class User {
protected:
    std::string userId;
    std::string name;
    std::string email;
    std::string password;
    std::vector<Notification> notifications;

public:
    User(std::string id, std::string name, std::string email, std::string password)
        : userId(id), name(name), email(email), password(password) {}

    virtual ~User() {}

    virtual void update(Notification notification) = 0;

    void addNotification(Notification notification) {
        notifications.push_back(notification);
    }

    void viewNotifications() const {
        for (const auto& notif : notifications) {
            std::cout << notif.getMessage() << " at " << notif.getTimestamp() << std::endl;
        }
    }

    // ✅ Fixed: Added getName() function
    std::string getName() const {
        return name;
    }
};

#endif // USER_H