#ifndef MARKETPLACE_FACADE_H
#define MARKETPLACE_FACADE_H

#include "Artwork.h"
#include "PricingStrategy.h"
#include "NotificationService.h"
#include <vector>

class MarketplaceFacade {
private:
    std::vector<Artwork*> artworks;
    NotificationService notificationService;

public:
    void addArtwork(Artwork* artwork);
    void purchaseArtwork(Artwork* artwork);
    void sendNotification(const std::string& message);
};

#endif // MARKETPLACE_FACADE_H