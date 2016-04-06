#ifndef PRAGUE_H
#define PRAGUE_H

#include <iostream>
#include <string>
#include <sstream>
#include <string>
using namespace std;

class Prague::public cityClass {
	public:
        	Prague();		
};

//Constructor for Prague
Prague::Prague(){
	string country="Czech Republic";
	string language="Czech";
	double population=1247000;
	double costRanking=9;  
	double adventureRanking=8; 
	double culturalRanking=7; 
	double educationalRanking=6;
	double scenicRanking=8;
	//fill in the vector with activities
}

//Go into the given file and display this
void cityClass::displayInfo(string f){
	f="Prague.txt";
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
