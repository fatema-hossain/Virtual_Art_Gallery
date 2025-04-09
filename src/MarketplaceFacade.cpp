#include "MarketplaceFacade.h"
#include <iostream>

void MarketplaceFacade::addArtwork(Artwork* artwork) {
    artworks.push_back(artwork);
    std::cout << "Artwork added: " << artwork->getTitle() << std::endl;
}

void MarketplaceFacade::purchaseArtwork(Artwork* artwork) {
    std::cout << "Artwork purchased: " << artwork->getTitle() << std::endl;
    sendNotification("Artwork " + artwork->getTitle() + " has been sold!");
}

void MarketplaceFacade::sendNotification(const std::string& message) {
    notificationService.sendNotification(message);
}