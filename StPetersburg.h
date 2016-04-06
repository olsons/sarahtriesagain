#ifndef STPETERSBURG_H
#define STPETERSBURG_H

#include <iostream>
#include <string>
#include <sstream>
#include <string>
using namespace std;

class StPetersburg::public cityClass {
	public:
        	StPetersburg();		
};

//Constructor for StPetersburg
StPetersburg::StPetersburg(){
	string country="Russia";
	string language="Russian";
	double population=249688;
	double costRanking=3;  
	double adventureRanking=5; 
	double culturalRanking=8; 
	double educationalRanking=8;
	double scenicRanking=8;
	//fill in the vector with activities
}

//Go into the given file and display this
void cityClass::displayInfo(string f){
	f="StPetersburg.txt";
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
