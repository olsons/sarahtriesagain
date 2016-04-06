#ifndef SALZBURG_H
#define SALZBURG_H

#include <iostream>
#include <string>
#include <sstream>
#include <string>
using namespace std;

class Salzburg::public cityClass {
	public:
        	Salzburg();		
};

//Constructor for Salzburg
Salzburg::Salzburg(){
	string country="German";
	string language="Austria";
	double population=145871;
	double costRanking=5;  
	double adventureRanking=9; 
	double culturalRanking=7; 
	double educationalRanking=5;
	double scenicRanking=9;
	//fill in the vector with activities
}

//Go into the given file and display this
void cityClass::displayInfo(string f){
	f="Salzburg.txt";
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
