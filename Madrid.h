#ifndef MADRID_H
#define MADRID_H

#include <iostream>
#include <string>
#include <sstream>
#include <string>
using namespace std;

class Madrid::public cityClass {
	public:
        	Madrid();		
};

//Constructor for Madrid
Madrid::Madrid(){
	string country="Spain";
	string language="Spanish";
	double population=3165000;
	double costRanking=8;  
	double adventureRanking=6; 
	double culturalRanking=7; 
	double educationalRanking=8;
	double scenicRanking=8;
	//fill in the vector with activities
}

//Go into the given file and display this
void cityClass::displayInfo(string f){
	f="Madrid.txt";
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
