#ifndef FLORENCE_H
#define FLORENCE_H

#include <iostream>
#include <string>
#include <sstream>
#include <string>
using namespace std;

class Florence::public cityClass {
	public:
        	Florence();		
};

//Constructor for Florence
Florence::Florence(){
	string country="France";
	string language="French";
	double population=361679;
	double costRanking=6;  
	double adventureRanking=3; 
	double culturalRanking=7; 
	double educationalRanking=6;
	double scenicRanking=6;
	//fill in the vector with activities
}

//Go into the given file and display this
void cityClass::displayInfo(string f){
	f="Florence.txt";
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
