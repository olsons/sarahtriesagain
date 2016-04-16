/*Kim Kosman and Sarah Olson
 * Travel Tool
 * CSE20212
 */

#ifndef SKTRAVEL_CITYCLASS_H
#define SKTRAVEL_CITYCLASS_H

#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <math.h>
#include <stdio.h>
using namespace std;

class cityClass {
	public:
		cityClass(string, string, double, double, double, double, double, double); //constructor
		double matchRanks(vector<double>); //use a chi-square like test to determine how similar the rankings gathered from the wish list are to the city
	       	string findLodging(); //see if an airbnb or a hostel is a better option
		void displayInfo(); //display general information
		string findNearby(); //find nearby cities
		string getCity();
		string getCountry();
		double getLatitude();
		double getLongitude();
		int bucketMatch(vector<string>);
	
	private:
		string cityname;
		string country;
		string language;
		double population; //get how large the city is
		double costRanking; //ranking 1-10 on the cost of the city (10 being cheap)
		double adventureRanking; //ranking 1-10 based on the available sports
		double culturalRanking; //ranking 1-10 based on diversity from the United States
		double educationalRanking; //ranking 1-10 based on educational value (history and musuems)
		double scenicRanking; //ranking 1-10 based on the overall beauty of the city and landmarks
		double longitude; //longitude of a city to see nearby cities
		double latitude; //latitude of a city to see nearby cities
		vector<string> activities; //list all the activities within the city
};

#endif //SKTRAVEL_CITYCLASS_H
