/*Kim Kosman and Sarah Olson
 * Travel Tool
 * CSE20212
 */

#ifndef SKTRAVEL_CITYCLASS_H
#define SKTRAVEL_CITYCLASS_H

#include "Activity.h"
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <math.h>
#include <stdio.h>
using namespace std;

class cityClass : public Activity{	

	public:
		cityClass(string, string, string, unsigned int, int, int, int, int, int, double, double); //constructor
		double matchRanks(double []); //use a chi-square like test to determine how similar the rankings gathered from the wish list are to the city
	       	string findLodging(); //see if an airbnb or a hostel is a better option
		void displayInfo(); //display general information
		double findNearby(cityClass); //find nearby cities
		string getCity();
		string getCountry();
		string getLanguage();
		double getLatitude();
		double getLongitude();
	
	private:
		string cityname;
		string country;
		string language;
		unsigned int population; //get how large the city is
		int costRanking; //ranking 1-10 on the cost of the city (10 being cheap)
		int adventureRanking; //ranking 1-10 based on the available sports
		int culturalRanking; //ranking 1-10 based on diversity from the United States
		int educationalRanking; //ranking 1-10 based on educational value (history and musuems)
		int scenicRanking; //ranking 1-10 based on the overall beauty of the city and landmarks
		double longitude; //longitude of a city to see nearby cities
		double latitude; //latitude of a city to see nearby cities
};

#endif //SKTRAVEL_CITYCLASS_H
