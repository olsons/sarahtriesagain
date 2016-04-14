#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main(){
	int answer=0; //customer choice for the program
	int country=5;
	string curCity; //current location of person
	int radius; //radius for nearby cities
	//All of the instantiations of the city classes
	cityClass Salzburg("Salzburg", "German","Austria",145871, 5, 9, 7, 5, 9, 47.9085, 13.0550);
	cityClass Vienna("Vienna", "Austria", "German", 1741000, 8, 4, 7, 7, 7, 48.2082, 16.3738);
	cityClass Venice("Venice", "Italy", "Italian", 260060, 6,2,6,6,9, 45.4408, 12.3155);
	cityClass Tuscany("Tuscany", "Italy", "Italian", 3753000, 7,3,3,2,9, 43.7711, 11.2486);
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
		if (answer!=1 || answer!=2 || answer!=3 || answer!=4 || answer!=5){
			cout << "You did not enter in a correct number. Please try again" << endl;
			answer=0;
		}
	}

	switch(answer){
		case 1:
			string file, list;
			vector<double> userRanks;
			cout << "Where can we find your bucket list?" << endl;
			cin << file;
			ifstream bucketList(file.c_str());
			if (bucketList.is_open()){
				while(! bucketList.eof()){
					getline(bucketList, list);
					
				}
			}
			else{
				cout << "We couldn't find your bucket list, please try again." << endl;
				break;
			}
			
			double minChi=1000;
			int cityMatch;
			for (i=0;i<23;i++){
				if (Cities[i]->matchRanks(userRanks) > minChi){ //compute chi square and find most similar city
					cityMatch=i;
					minChi=Cities[i]->matchRanks(userRanks);
				}
			}
			Cities[cityMatch]->displayinfo();
		case 2:
			cout << "What country are you interested in exploring?" << endl;
			cin >> country;
			int count=0;
			for (int i=0;i<23;i++){ //print cities in the ocuntry specified
				if (count == 0 && Cities[i]->getCountry() == country){
					cout << "We can help you explore the following cities in " << country << ": " << endl;
					cout << Cities[i]->getCity() << endl;
					count++;
				}
				else if (Cities[i]->getCountry() == country){
					cout << Cities[i]->getCity() << endl;
					count++;
				}
			}
			if (count == 0)
				cout << "I'm sorry, we don't have information on that country.  We can help you explore other fun places though, please try again!" << endl;
			break;
		case 3:
			//Enter a location (city or country or both and then computer decides if city or country)
			cout << "Where are you currently located?" << endl;
			cin >> curCity;
			cout << "Within what radius do you want the nearby cities?"
			cin >> radius;
			//Use the longitude and latitude of all the different cities and to find distance and then compare with the radius
			int count=0;
			for (int i=0;i<23;i++){	
				if (Cities[i]->findNearby(curCity, radius) < radius){ //compute chi square and find most similar city
					cityMatch=i;
					minChi=Cities[i]->matchRanks(userRanks);
				}
			}
			if (count == 0)
				cout << "I'm sorry, there are no nearby cities in our database.  We can help you explore other fun places though, please try again!" << endl;
			break;
		case 4:
			//Chi squared (to match the actual versus wanted)
			//Ask for food, education, cost, scenic, and adventure preferences
			//Ask if they want a smaller city
			//Ask if they have a language preference
			
			break;
		case 5:
			//Shuffle cities and pick a random one, then display possible things to do within the cities
			srand ( time(NULL) ); //initialize the random seed
  			int RandIndex = rand() % 23; //generates a random number between 0 and 23
  			cout << Cities[RandIndex]; //pick a random city and display that shit
			break;
	}
}
