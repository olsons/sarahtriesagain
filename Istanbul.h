#ifndef ISTANBUL_H
#define ISTANBUL_H

#include <iostream>
#include <string>
#include <sstream>
#include <string>
using namespace std;

class Istanbul::public cityClass {
	public:
        	Istanbul();		
};

//Constructor for Istanbul
Istanbul::Istanbul(){
	string country="Turkey";
	string language="Turkish";
	double population=14030000;
	double costRanking=8;  
	double adventureRanking=8; 
	double culturalRanking=8; 
	double educationalRanking=7;
	double scenicRanking=7;
	//fill in the vector with activities
}

//Go into the given file and display this
void cityClass::displayInfo(string f){
	f="Istanbul.txt";
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
