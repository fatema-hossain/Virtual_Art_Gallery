#ifndef NOTIFICATION_H
#define NOTIFICATION_H

#include <string>
#include <ctime>

class Notification {
private:
    std::string message;
    std::time_t timestamp;

public:
    Notification(std::string msg)
        : message(msg), timestamp(std::time(nullptr)) {}

    std::string getMessage() const {
        return message;
    }

    std::time_t getTimestamp() const {
        return timestamp;
    }
};

#endif // NOTIFICATION_H