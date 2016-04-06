#ifndef AMSTERDAM_H
#define AMSTERDAM_H

#include <iostream>
#include <string>
#include <sstream>
#include <string>
using namespace std;

class Amsterdam::public cityClass {
	public:
        	Amsterdam();		
};

//Constructor for Amsterdam
Amsterdam::Amsterdam(){
	string country="Netherlands";
	string language="Dutch";
	double population=779808;
	double costRanking=3;  
	double adventureRanking=8; 
	double culturalRanking=7; 
	double educationalRanking=8;
	//fill in the vector with activities
}

//Go into the given file and display this
void cityClass::displayInfo(string f){
	f="Amsterdam.txt";
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
