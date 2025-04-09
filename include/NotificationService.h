#ifndef NOTIFICATION_SERVICE_H
#define NOTIFICATION_SERVICE_H

#include <vector>
#include <string>

class NotificationService {
private:
    std::vector<std::string> notifications;

public:
    void sendNotification(const std::string& message);
    void viewNotifications() const;
};

#endif // NOTIFICATION_SERVICE_H