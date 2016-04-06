#ifndef BUDAPEST_H
#define BUDAPEST_H

#include <iostream>
#include <string>
#include <sstream>
#include <string>
using namespace std;

class Budapest::public cityClass {
	public:
        	Budapest();		
};

//Constructor for Budapest
Budapest::Budapest(){
	string country="Hungary";
	string language="Hungarian";
	double population=1732000;
	double costRanking=10;  
	double adventureRanking=6; 
	double culturalRanking=8; 
	double educationalRanking=7;
	double scenicRanking=8;
	//fill in the vector with activities
}

//Go into the given file and display this
void cityClass::displayInfo(string f){
	f="Budapest.txt";
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
