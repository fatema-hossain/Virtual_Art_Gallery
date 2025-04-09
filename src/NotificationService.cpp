#include "NotificationService.h"
#include <iostream>

void NotificationService::sendNotification(const std::string& message) {
    notifications.push_back(message);
    std::cout << "Notification sent: " << message << std::endl;
}

void NotificationService::viewNotifications() const {
    std::cout << "User Notifications:\n";
    for (const auto& notif : notifications) {
        std::cout << "- " << notif << std::endl;
    }
}