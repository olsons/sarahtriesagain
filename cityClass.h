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

//Constructor
cityClass::cityClass(string city, string c, string l, double p, double costR, double aR, double culR, double eR, double sR,double latitude, double longitude) : cityname(city), country(c), language(l), population(p), costRanking(costR), adventureRanking(aR), culturalRanking(culR), educationalRanking(eR), scenicRanking(sR), latitude(la), longitude(lo){}

double cityClass::matchRanks(vector<double> userRanks){
	double cityRanks[] = {costRanking, adventureRanking, culturalRanking, educationalRanking, scenicRanking};
	double chiSum = 0;

	for (int i=0;i<5;i++)
		chiSum += pow((cityRanks[i]-userRanks[i]), 2);

	return chiSum;
}

//Find nearby by using the longitude/latitude cordinates, return distance from current city to the iterator city
int cityClass::findNearby(string currentCity, int radius){
	double longitudeDis;
	double latitudeDis;
	y1=latitude*60*1852; //pseudo-coordinates in meters, 1852 is meters to nautical mile (assume a sphere, although earth isnt)
	x1=(longitude*60*1852)/(cos(latitude));
	y2=(currentCity.latitude())*60*1852;
	x2=(currentCity.longitude())*60*1852)/(cos(currentCity.latitude()));
	return sqrt((x2-x1)^2 + (y2-y1)^2));
}

string cityClass::getCity(){
	return cityname;
}

string cityClass::getCountry(){
	return country;
}

double cityClass::getLongitude(){
	return longitude;
}

double cityClass::getLatitude(){
	return latitude;
}
#endif //SKTRAVEL_CITYCLASS_H
