#ifndef STOCKHOLM_H
#define STOCKHOLM_H

#include <iostream>
#include <string>
#include <sstream>
#include <string>
using namespace std;

class Stockholm::public cityClass {
	public:
        	Stockholm();		
};

//Constructor for Stockholm
Stockholm::Stockholm(){
	string country="Sweden";
	string language="Swedish";
	double population=789024;
	double costRanking=4;  
	double adventureRanking=5; 
	double culturalRanking=7; 
	double educationalRanking=6;
	double scenicRanking=7;
	//fill in the vector with activities
}

//Go into the given file and display this
void cityClass::displayInfo(string f){
	f="Stockholm.txt";
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
