#ifndef LISBON_H
#define LISBON_H

#include <iostream>
#include <string>
#include <sstream>
#include <string>
using namespace std;

class Lisbon::public cityClass {
	public:
        	Lisbon();		
};

//Constructor for Lisbon
Lisbon::Lisbon(){
	string country="Portugal";
	string language="Portuguese";
	double population=530847;
	double costRanking=8;  
	double adventureRanking=7; 
	double culturalRanking=6; 
	double educationalRanking=5;
	double scenicRanking=7;
	//fill in the vector with activities
}

//Go into the given file and display this
void cityClass::displayInfo(string f){
	f="Lisbon.txt";
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

#endif //SKTRAVEL_CITYCLASS_H
