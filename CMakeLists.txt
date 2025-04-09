cmake_minimum_required(VERSION 3.10)
project(VirtualArtGallery)

set(CMAKE_CXX_STANDARD 17)

add_executable(VirtualArtGallery
    src/main.cpp
    src/User.cpp
    src/Artist.cpp
    src/Buyer.cpp
    src/Admin.cpp
    src/Artwork.cpp
    src/PricingStrategy.cpp
    src/NotificationService.cpp
    src/MarketplaceFacade.cpp
)


include_directories(include)
