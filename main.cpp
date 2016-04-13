#include <iostream>
#include <string>
#include <sstream>
#include <string>
using namespace std;

int main(){
	int answer=0; //customer choice for the program
	int country=5;
	string countryName;

	while (answer==0){
		cout << "Welcome to our travel app! What would you like to do today? " << endl;
		cout << "1) Enter in a bucket list and we will match as many items as we can " << endl;
		cout << "2) See cities in a particular country " << endl;
		cout << "3) See cities near you " << endl; 
		cout << "4) Customize a trip based on preferences" << endl;
		cout << "5) Random adventure" << endl;
		cin >> answer;
		if (answer!=1 || answer!=2 || answer!=3){
			cout << "You did not enter in a correct number. Please try again" << endl;
			answer=0;
		}
	}

	switch(answer){
		case 1:
			cout << "Is there a specific country you are interested in looking for the item in? (0 for no, 1 for yes)" << endl;
			while (country != 0 || country != 1){
				cin >> country;
			}
			if (country==0){
				//search for bucket list item (text goes into vector of activities, then see where there is a match)
			}
			else{	
				cout << "What country will you like to explore?"
				cin >> countryName;
				//search for cities in the given country
			}
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			//Chi squared (to match the actual versus wanted)
			//Ask for food, education, cost, scenic, and adventure preferences
			//Ask if they want a smaller city
			//Ask if they have a language preference
			break;
		case 5:
			//Shuffle cities and pick a random one, then display possible things to do within the cities
			break;
	}
}
