#ifndef MONACO_H
#define MONACO_H

#include <iostream>
#include <string>
#include <sstream>
#include <string>
using namespace std;

class Monaco::public cityClass {
	public:
        	Monaco();		
};

//Constructor for Monaco
Monaco::Monaco(){
	string country="France";
	string language="French";
	double population=37831;
	double costRanking=5;  
	double adventureRanking=6; 
	double culturalRanking=5; 
	double educationalRanking=3;
	double scenicRanking=6;
	//fill in the vector with activities
}

//Go into the given file and display this
void cityClass::displayInfo(string f){
	f="Monaco.txt";
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
