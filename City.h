/*Kim Kosman
 * City Class for sktravel tool project
 * Preliminary planning stage
 */
#include <iostream>
#include <string>
using std::string;

#ifndef SKTRAVEL_City_H
#define SKTRAVEL_City_H

class City { //eventually will inherit public(wishList) class but not yet for compiling purposes
    public:
        int matchWishList(); //wishlist items that must match this city
        int findLodging(); //weigh options, airbnb or a hostel
        int findAdventure(); //find an adventure in the city for the traveller
    private:
        string country;
        string language;
        double population;
        double costRanking;
        double adventureRanking;
        double culturalRanking;
};

#endif
