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
using namespace std;

//Constructor
cityClass::cityClass(string city, string c, string l, double p, int costR, int aR, int culR, int eR, int sR,double la, double lo) : cityname(city), country(c), language(l), population(p), costRanking(costR), adventureRanking(aR), culturalRanking(culR), educationalRanking(eR), scenicRanking(sR), latitude(la), longitude(lo){
	string activity;
	string file = cityname;
	file.append(".txt");
	ifstream activityFile;
	activityFile.open(file.c_str());
	
	while (! activityFile.eof()){
		getline(activityFile, activity);
		activities.push_back(activity);
	}
}

double cityClass::matchRanks(vector<int> userRanks){
	double cityRanks[] = {costRanking, adventureRanking, culturalRanking, educationalRanking, scenicRanking};
	double chiSum = 0;

	for (int i=0;i<5;i++)
		chiSum += pow((cityRanks[i]-userRanks[i]), 2);

	return chiSum;
}

//display info about the city
void cityClass::displayInfo(){
	cout << cityname << ", " << country << endl;
	cout << "Language: " << language << endl;
	cout << "Population: " << population << endl;
	cout << "Rankings (1-10): " << endl;
	cout << "	Cost: " << costRanking << endl;
	cout << "	Adventurous: " << adventureRanking << endl;
	cout << "	Cultural: " << culturalRanking << endl;
	cout << "	Educational: " << educationalRanking << endl;
	cout << "	Beauty: " << scenicRanking << endl;
	cout << "Things to do: " << endl;
	for (int i=0;i<5;i++)
		cout << "	" << activities[i] << endl;
}

//Find nearby by using the longitude/latitude cordinates, return distance from current city to the iterator city
int cityClass::findNearby(cityClass currentCity, int radius){
	double longitudeDis;
	double latitudeDis;
	double y1, y2, x1, x2;
	y1=latitude*60*1852; //pseudo-coordinates in meters, 1852 is meters to nautical mile (assume a sphere, although earth isnt)
	x1=(longitude*60*1852)/(cos(latitude));
	y2=(currentCity.getLatitude())*60*1852;
	x2=((currentCity.getLongitude())*60*1852)/(cos(currentCity.getLatitude()));
	return sqrt(pow((x2-x1),2) + pow((y2-y1),2));
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

int cityClass::bucketMatch(vector<string> bucketList){
	int match=0;

	for (int i=0;i<activities.size();i++){
		for (int j=0;j<bucketList.size();j++){
			if (activities[i]==bucketList[j])
				match++;
		}
	}
	return match;
}
