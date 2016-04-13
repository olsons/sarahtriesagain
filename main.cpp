#include <iostream>
#include <string>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

int main(){
	int answer=0; //customer choice for the program
	int country=5;
	//All of the instantiations of the city classes
	cityClass Salzburg("Salzburg", "German","Austria",145871, 5, 9, 7, 5, 9);
	cityClass Vienna("Vienna", "Austria", "German", 1741000, 8, 4, 7, 7, 7);
	cityClass Venice("Venice", "Italy", "Italian", 260060, 6,2,6,6,9);
	cityClass Tuscany("Tuscany", "Italy", "Italian", 3753000, 7,3,3,2,9);
	cityClass StPetersburg("St. Petersburg", "Russia", "Russian", 249688, 3, 5, 8, 8, 8);
	cityClass Stockholm("Stockholm", "Sweden", "Swedish", 789024, 4,5,7,6,7);
	cityClass Rome("Rome", "Italy", "Italian", 2626000, 4, 5, 9, 10, 7);
	cityClass Prague("Prague", "Czech Republic", "Czech", 1247000, 9,8,7,6,8);
	cityClass Paris("Paris", "France", "French", 66030000, 2,6,9,10,9);
	cityClass Monaco("Monaco", "France", "French", 37831, 5, 6, 5, 3, 6);
	cityClass Madrid("Madrid", "Spain", "Spanish", 3165000, 8,6, 7, 8,8);
	cityClass London("London", "United Kingdom", "English", 8539000, 3, 6, 8,7,7);
	cityClass Lisbon("Lisbon", "Portugal", "Portuguese", 530847, 8,7,6,5,7);
	cityClass Istanbul("Istanbul", "Turkey", "Turkish", 14030000, 8,8,8,7,7);
	cityClass Florence("Florence", "France", "French", 361679, 6, 3,7,6,6);
	cityClass Edinburgh("Edinburgh", "United Kingdom", "English", 495360, 8, 4, 7, 7, 6);
	cityClass Dublin("Dublin", "Ireland", "English", 527612, 4, 4, 8, 7, 6);
	cityClass Budapest("Budapest", "Hungary", "Hungarian", 1732000, 10, 6, 8, 7, 8);
	cityClass Brussels("Brussels", "Belgium", "Dutch", 177307, 4, 5, 8, 6, 7);
	cityClass Bruges("Bruges", "Belgium", "Flemish", 117377, 7, 2, 7, 5, 8);
	cityClass Barcelona("Barcelona", "Spain", "Spanish", 1602000, 4, 7, 6, 7);
	cityClass Berlin("Berlin", "Germany", "German", 3502000, 7, 5, 9, 10, 7);
	cityClass Amsterdam("Amsterdam", "Netherlands", "Dutch", 779808, 3, 8, 7, 8);

	// array of cities
	cityClass * Cities[23] = {Salzburg, Vienna, Venice, Tuscany, StPetersburg, Stockholm, Rome, Prague, Paris, Monaco, Madrid, London, Lisbon, Istanbul, Florence, Edinburgh, Dublin, Budapest, Brussels, Bruges, Barcelona, Berlin, Amsterdam};

	//prompts for options
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
