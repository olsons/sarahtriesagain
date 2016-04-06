#ifndef BARCELONA_H
#define BARCELONA_H

#include <iostream>
#include <string>
#include <sstream>
#include <string>
using namespace std;

class Barcelona::public cityClass {
	public:
        	Barcelona();		
};

//Constructor for Barcelona
Barcelona::Barcelona(){
	string country="Spain";
	string language="Spanish";
	double population=1602000;
	double costRanking=4;  
	double adventureRanking=7; 
	double culturalRanking=6; 
	double educationalRanking=7;
	//fill in the vector with activities
}

//Go into the given file and display this
void cityClass::displayInfo(string f){
	f="Barcelona.txt";
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
