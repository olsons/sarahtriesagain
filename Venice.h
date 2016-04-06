#ifndef VENICE_H
#define VENICE_H

#include <iostream>
#include <string>
#include <sstream>
#include <string>
using namespace std;

class Venice::public cityClass {
	public:
        	Venice();		
};

//Constructor for Venice
Venice::Venice(){
	string country="Italy";
	string language="Italian";
	double population=260060;
	double costRanking=6;  
	double adventureRanking=2; 
	double culturalRanking=6; 
	double educationalRanking=6;
	double scenicRanking=9;
	//fill in the vector with activities
}

//Go into the given file and display this
void cityClass::displayInfo(string f){
	f="Venice.txt";
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
