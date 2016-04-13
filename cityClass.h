#ifndef SKTRAVEL_CITYCLASS_H
#define SKTRAVEL_CITYCLASS_H

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class cityClass {
	public:
        	virtual string matchWishList(); //return a city that matches a given wish list mention
        	virtual string findLodging(); //see if an airbnb or a hostel is a better option
		virtual void displayInfo(); //display general information
		cityClass(); //constructor
	private:
		string country;
		string language;
		double population; //get how large the city is
		double costRanking; //ranking 1-10 on the cost of the city (10 being cheap)
		double adventureRanking; //ranking 1-10 based on the available sports
		double culturalRanking; //ranking 1-10 based on diversity from the United States
		double educationalRanking; //ranking 1-10 based on educational value (history and musuems)
		double scenicRanking; //ranking 1-10 based on the overall beauty of the city and landmarks
		vector<string> activities; //list all the activities within the city
};

//Constructor
cityClass::cityClass(string country1, string language1, double population1, double costRanking1, double adventureRanking1, double culturalRanking1, double educationalRanking1, double scenicRanking1):country(country1),language(language1), population(popluation1), costRanking(costRanking1), adventureRanking(adventureRanking1), culturalRanking(culturalRanking1), educationRanking(educationalRanking1), scenicRanking(scenicRanking1){
	
}


#endif //SKTRAVEL_CITYCLASS_H
