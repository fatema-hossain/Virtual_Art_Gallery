#include <iostream>
#include "Artist.h"
#include "Buyer.h"
#include "Admin.h"
#include "Notification.h"
#include "Artwork.h"

int main() {
    // Create users
    Artist artist("A1", "Leonardo", "leo@example.com", "password123");
    Buyer buyer("B1", "Alice", "alice@example.com", "securepass");
    Admin admin("AD1", "Fatema", "admin@example.com", "adminpass");

    // Create an artwork
    Artwork artwork("ART001", "Starry Night", "Leonardo", 500.0);

    // Artist uploads artwork
    artist.uploadArtwork(&artwork);

    // Buyer purchases artwork
    buyer.purchaseArtwork(&artwork);

    // Admin approves artwork
    admin.approveArtwork(&artwork);

    // Send notification
    Notification saleNotification("Artwork 'Starry Night' has been sold!");
    artist.update(saleNotification);
    buyer.update(saleNotification);
    admin.notifyAllUsers(saleNotification);

    // View notifications
    std::cout << "\nArtist Notifications:\n";
    artist.viewNotifications();

    std::cout << "\nBuyer Notifications:\n";
    buyer.viewNotifications();

    return 0;
}