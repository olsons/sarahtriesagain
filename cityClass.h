#ifndef SKTRAVEL_CITYCLASS_H
#define SKTRAVEL_CITYCLASS_H

#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

class cityClass {
	public:
		cityClass(string, string, double, double, double, double, double, double); //constructor
		double matchRanks(vector<double>); //use a chi-square like test to determine how similar the rankings gathered from the wish list are to the city
        	string findLodging(); //see if an airbnb or a hostel is a better option
		void displayInfo(); //display general information
		string getCity();
		string getCountry();
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
		vector<string> activities; //list all the activities within the city
};

//Constructor
cityClass::cityClass(string city, string c, string l, double p, double costR, double aR, double culR, double eR, double sR) : cityname(city), country(c), language(l), population(p), costRanking(costR), adventureRanking(aR), culturalRanking(culR), educationalRanking(eR), scenicRanking(sR){}

double cityClass::matchRanks(vector<double> userRanks){
  double cityRanks[] = {costRanking, adventureRanking, culturalRanking, educationalRanking, scenicRanking};
  double chiSum = 0;

  for (int i=0;i<5;i++)
	chiSum += pow((cityRanks[i]-userRanks[i]), 2);

  return chiSum;
}

string cityClass::getCity(){
  return cityname;
}

string cityClass::getCountry(){
  return country;
}
#endif //SKTRAVEL_CITYCLASS_H
