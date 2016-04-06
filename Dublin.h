#ifndef DUBLIN_H
#define DUBLIN_H

#include <iostream>
#include <string>
#include <sstream>
#include <string>
using namespace std;

class Dublin::public cityClass {
	public:
        	Dublin();		
};

//Constructor for Dublin
Dublin::Dublin(){
	string country="Ireland";
	string language="English";
	double population=527612;
	double costRanking=4;  
	double adventureRanking=4; 
	double culturalRanking=8; 
	double educationalRanking=7;
	double scenicRanking=6;
	//fill in the vector with activities
}

//Go into the given file and display this
void cityClass::displayInfo(string f){
	f="Dublin.txt";
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
