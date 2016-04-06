#ifndef BRUGES_H
#define BRUGES_H

#include <iostream>
#include <string>
#include <sstream>
#include <string>
using namespace std;

class Bruges::public cityClass {
	public:
        	Bruges();		
};

//Constructor for Bruges
Bruges::Bruges(){
	string country="Belgium";
	string language="Flemish";
	double population=117377;
	double costRanking=7;  
	double adventureRanking=2; 
	double culturalRanking=7; 
	double educationalRanking=5;
	double scenicRanking=8;
	//fill in the vector with activities
}

//Go into the given file and display this
void cityClass::displayInfo(string f){
	f="Bruges.txt";
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
