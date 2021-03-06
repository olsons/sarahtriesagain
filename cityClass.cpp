/*Kim Kosman and Sarah Olson
 * Travel Tool
 * CSE20212
 */

#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <math.h>
#include <fstream>
#include <stdio.h>
#include "cityClass.h"
#include "Activity.h"

#define PI 3.14159265
using namespace std;

//Constructor
cityClass::cityClass(string city, string c, string l, unsigned int p, int costR, int aR, int culR, int eR, int sR,double la, double lo) : Activity(city){
	cityname=city;
	country=c;
	language=l;
	population=p;
	costRanking=costR;
	adventureRanking=aR; 
	culturalRanking=culR; 
	educationalRanking=eR; 
	scenicRanking=sR; 
	latitude=la; 
	longitude=lo;
}

double cityClass::matchRanks(double userRanks[]){
	double cityRanks[] = {costRanking, adventureRanking, culturalRanking, educationalRanking, scenicRanking};
	double chiSum = 0;

	for (int i=0;i<5;i++)
		chiSum += pow((cityRanks[i]-userRanks[i]), 2);

	return chiSum;
}

//display info about the city
void cityClass::displayInfo(){
	cout << "\033[1;36m" << cityname << ", " << country  << " \033[0m" << endl;
	cout << "\033[1;35mLanguage: \033[0m " << language << endl;
	cout << "\033[1;35mPopulation: \033[0m " << fixed << population << endl;
	cout << "\033[1;35mRankings (1-10): \033[0m " << endl;
	cout << "	Cost: " << costRanking << endl;
	cout << "	Adventurous: " << adventureRanking << endl;
	cout << "	Cultural: " << culturalRanking << endl;
	cout << "	Educational: " << educationalRanking << endl;
	cout << "	Beauty: " << scenicRanking << endl;
	cout << "\033[1;35mThings to do: \033[0m  " << endl;
	Activity::printActivities();
}

//Find nearby by using the longitude/latitude cordinates, return distance from current city to the iterator city
double cityClass::findNearby(cityClass currentCity){
	double y1, y2, x1, x2;
	double R = 6371000; // metres
	double lat1 = (latitude*PI/180);
	double lat2 = (currentCity.getLatitude()*PI/180);
	double deltaLat = ((currentCity.getLatitude()-latitude)*PI)/180;
	double deltaLon = ((currentCity.getLongitude()-longitude)*PI)/180;

	double a = (sin(deltaLat/2) * sin(deltaLat/2)) + (cos(lat1) * cos(lat2) * sin(deltaLon/2) * sin(deltaLon/2));
	double c = 2 * atan2(sqrt(a), sqrt(1-a));
	double d = R * c;
	return d/1000;
}

string cityClass::getCity(){
	return cityname;
}

string cityClass::getCountry(){
	string lowerCountry=country;
	for (int i=0;i<lowerCountry.size();i++)
		lowerCountry[i]=tolower(lowerCountry[i]);
	return lowerCountry;
}

string cityClass::getLanguage(){
	string lowerLanguage=language;
	for (int i=0;i<lowerLanguage.size();i++)
		lowerLanguage[i]=tolower(lowerLanguage[i]);
	return lowerLanguage;
}

double cityClass::getLongitude(){
	return longitude;
}

double cityClass::getLatitude(){
	return latitude;
}
