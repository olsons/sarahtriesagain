#ifndef BERLIN_H
#define BERLIN_H

#include <iostream>
#include <string>
#include <sstream>
#include <string>
using namespace std;

class Berlin::public cityClass {
	public:
        	Berlin();		
};

//Constructor for Berlin
Berlin::Berlin(){
	string country="Germany";
	string language="German";
	double population=3502000;
	double costRanking=7;  
	double adventureRanking=5; 
	double culturalRanking=9; 
	double educationalRanking=10;
	double scenicRanking=7;
	//fill in the vector with activities
}

//Go into the given file and display this
void cityClass::displayInfo(string f){
	f="Berlin.txt";
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
