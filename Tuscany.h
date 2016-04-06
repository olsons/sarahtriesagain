#ifndef TUSCANY_H
#define TUSCANY_H

#include <iostream>
#include <string>
#include <sstream>
#include <string>
using namespace std;

class Tuscany::public cityClass {
	public:
        	Tuscany();		
};

//Constructor for Tuscany
Tuscany::Tuscany(){
	string country="Italy";
	string language="Italian";
	double population=3753000;
	double costRanking=7;  
	double adventureRanking=3; 
	double culturalRanking=3; 
	double educationalRanking=2;
	double scenicRanking=9;
	//fill in the vector with activities
}

//Go into the given file and display this
void cityClass::displayInfo(string f){
	f="Tuscany.txt";
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
