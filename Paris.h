#ifndef PARIS_H
#define PARIS_H

#include <iostream>
#include <string>
#include <sstream>
#include <string>
using namespace std;

class Paris::public cityClass {
	public:
        	Paris();		
};

//Constructor for Paris
Paris::Paris(){
	string country="France";
	string language="French";
	double population=66030000;
	double costRanking=2;  
	double adventureRanking=6; 
	double culturalRanking=9; 
	double educationalRanking=10;
	double scenicRanking=9;
	//fill in the vector with activities
}

//Go into the given file and display this
void cityClass::displayInfo(string f){
	f="Paris.txt";
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
