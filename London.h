#ifndef LONDON_H
#define LONDON_H

#include <iostream>
#include <string>
#include <sstream>
#include <string>
using namespace std;

class London::public cityClass {
	public:
        	London();		
};

//Constructor for London
London::London(){
	string country="United Kingdom";
	string language="English";
	double population=8539000;
	double costRanking=3;  
	double adventureRanking=6; 
	double culturalRanking=8; 
	double educationalRanking=7;
	double scenicRanking=7;
	//fill in the vector with activities
}

//Go into the given file and display this
void cityClass::displayInfo(string f){
	f="London.txt";
	ifstream nodeFile(f.c_str());
	//Get in the data from the file
	if (nodeFile.is_open()){
		cout << nodeFile << endl;
	}	
}

//Go through the vector of activities to see if any of them match up
string cityClass::matchWishList(){

}

//See if it is easier to use airbnb or a hostel in that city (check the hostel rating and availablity) 
string cityClass::findLodging(){

}
