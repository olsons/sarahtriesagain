/*Kim Kosman and Sarah Olson
 * Travel Tool
 * CSE20212
 */

#include "cityClass.h"
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main(){
	//initialize varaibles
	int answer=0; //customer choice for the program
	string country;
	string curCity; //current location of person
	int max, maxMatch, count, radius, RandIndex, match;
	vector<int> cityMatch(23,0);
	vector<string> list;
	string file, item;
	double minRad, minChi;
	vector<int> userRanks(5,0);
	ifstream bucketList;

	//All of the instantiations of the city classes
	cityClass Salzburg("Salzburg", "German","Austria",145871, 5, 9, 7, 5, 9, 47.9085, 13.0550);
	cityClass Vienna("Vienna", "Austria", "German", 1741000, 8, 4, 7, 7, 7, 48.2082, 16.3738);
	cityClass Venice("Venice", "Italy", "Italian", 260060, 6,2,6,6,9, 45.4408, 12.3155);
	cityClass Tuscany("Tuscany", "Italy", "Italian", 3753000, 7,3,3,2,9, 43.7711, 11.2486);
	cityClass StPetersburg("StPetersburg", "Russia", "Russian", 249688, 3, 5, 8, 8, 8, 59.9343, 30.3351);
	cityClass Stockholm("Stockholm", "Sweden", "Swedish", 789024, 4,5,7,6,7,59.3293,18.0686);
	cityClass Rome("Rome", "Italy", "Italian", 2626000, 4, 5, 9, 10, 7, 41.9028, 12.4964);
	cityClass Prague("Prague", "Czech Republic", "Czech", 1247000, 9,8,7,6,8, 50.0755, 14.4378);
	cityClass Paris("Paris", "France", "French", 66030000, 2,6,9,10,9,48.8566,2.3522);
	cityClass Monaco("Monaco", "France", "French", 37831, 5, 6, 5, 3, 6, 43.7384, 7.4246);
	cityClass Madrid("Madrid", "Spain", "Spanish", 3165000, 8,6, 7, 8, 8, 40.4168, 3.7038);
	cityClass London("London", "England", "English", 8539000, 3, 6, 8, 7, 7, 51.5074, 0.1278);
	cityClass Lisbon("Lisbon", "Portugal", "Portuguese", 530847, 8, 7, 6, 5, 7, 38.7223, 9.1393);
	cityClass Istanbul("Istanbul", "Turkey", "Turkish", 14030000, 8, 8, 8, 7, 7, 41.0082, 28.9784);
	cityClass Florence("Florence", "Italy", "Italian", 361679, 6, 3, 7, 6, 6, 43.7696, 11.2558);
	cityClass Edinburgh("Edinburgh", "United Kingdom", "English", 495360, 8, 4, 7, 7, 6, 55.9533, 3.1883);
	cityClass Dublin("Dublin", "Ireland", "English", 527612, 4, 4, 8, 7, 6, 53.3498, 6.2603);
	cityClass Budapest("Budapest", "Hungary", "Hungarian", 1732000, 10, 6, 8, 7, 8, 47.4979, 19.0402);
	cityClass Brussels("Brussels", "Belgium", "Dutch", 177307, 4, 5, 8, 6, 7, 50.8503, 4.3517);
	cityClass Bruges("Bruges", "Belgium", "Flemish", 117377, 7, 2, 7, 5, 8, 51.2093, 3.2247);
	cityClass Barcelona("Barcelona", "Spain", "Spanish", 1602000, 4, 7, 6, 7, 9, 41.3851, 2.1734);
	cityClass Berlin("Berlin", "Germany", "German", 3502000, 7, 5, 9, 10, 7, 52.52, 13.405);
	cityClass Amsterdam("Amsterdam", "Netherlands", "Dutch", 779808, 3, 8, 7, 8, 7, 52.3702, 4.8952);

	// array of cities
	cityClass * Cities[23] = {&Salzburg, &Vienna, &Venice, &Tuscany, &StPetersburg, &Stockholm, &Rome, &Prague, &Paris, &Monaco, &Madrid, &London, &Lisbon, &Istanbul, &Florence, &Edinburgh, &Dublin, &Budapest, &Brussels, &Bruges, &Barcelona, &Berlin, &Amsterdam};

	while (1){
		answer=0;
		//prompts for options
		while (answer==0){
			cout << "Welcome to our travel app! What would you like to do today? " << endl;
			cout << "1) Enter in a bucket list and we will match as many items as we can " << endl;
			cout << "2) See cities in a particular country " << endl;
			cout << "3) See cities near you " << endl; 
			cout << "4) Customize a trip based on preferences" << endl;
			cout << "5) Random adventure" << endl;
			cout << "6) Quit" << endl;
			cin >> answer;
			if (answer < 1 || answer > 6){
				cout << "You did not enter in a correct number. Please try again" << endl;
				answer=0;
			}
		}

		switch(answer){
			case 1:
				cout << "Where can we find your bucket list?" << endl;
				cin >> file;
				bucketList.open(file.c_str());
				if (bucketList.is_open()){
					while(! bucketList.eof()){
						getline(bucketList, item);
						list.push_back(item);
					}
				}
				else{
					cout << "We couldn't find your bucket list, please try again." << endl;
					break;
				}
			
				for (int i=0;i<23;i++)
					cityMatch[i] = Cities[i]->bucketMatch(list);
			
				max=0;
				for (int i=0;i<23;i++){
					if (cityMatch[i]>max){
						max=cityMatch[i];
						maxMatch=i;
					}
				}

				if (max>0)
					Cities[maxMatch]->displayInfo();
				else if (max==0)
					cout << "We could not find a city to match your bucket list. Please try again!" << endl;
				break;
			case 2:
				cout << "What country are you interested in exploring?" << endl;
				cin >> country;
				count=0;
				for (int i=0;i<23;i++){ //print cities in the ocuntry specified
					if (count == 0 && country.compare(Cities[i]->getCountry()) == 0){
						cout << "We can help you explore the following cities in " << country << ": " << endl;
						cout << Cities[i]->getCity() << endl;
						count++;
					}
					else if (country.compare(Cities[i]->getCountry()) == 0){
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
				cout << "Within what radius do you want the nearby cities?";
				cin >> radius;
				//Use the longitude and latitude of all the different cities and to find distance and then compare with the radius
				count=0;
				minRad=1000*radius;
				match=-1;
				for (int i=0;i<23;i++){
					if (curCity.compare(Cities[i]->getCity())==0)
						match=i;
				}
				if (match==-1){
					cout << "Sorry, your city could not be found. Please try again!" << endl;
					break;
				}	
				for (int i=0;i<23;i++){	
					if (Cities[i]->findNearby(*Cities[match], radius) < radius){ //compute chi square and find most similar city
						match=i;
						minRad=Cities[i]->matchRanks(userRanks);
					}
				}
				if (count == 0)
					cout << "I'm sorry, there are no nearby cities in our database.  We can help you explore other fun places though, please try again!" << endl;
				else
					Cities[match]->displayInfo();
				break;
			case 4:
				//Chi squared (to match the actual versus wanted)
				//Ask for food, education, cost, scenic, and adventure preferences
				//Ask if they want a smaller city
				//Ask if they have a language preference
	
				cout << "Please enter your preferences on a 1-10 scale!" << endl;
				cout << "Cost: ";
				cin >> userRanks[0];
				cout << "Adventurous: ";
				cin >> userRanks[1];
				cout << "Cultural: ";
				cin >> userRanks[2];
				cout << "Educational: ";
				cin >> userRanks[3];
				cout << "Beauty: ";
				cin >> userRanks[4];

				minChi=1000;
                	        for (int i=0;i<23;i++){
                        	        if (Cities[i]->matchRanks(userRanks) > minChi){ //compute chi square and find most similar city
                                	        match=i;
                                        	minChi=Cities[i]->matchRanks(userRanks);
   	                                }
        	                }
                	        Cities[match]->displayInfo();
				break;
			case 5:
				//Shuffle cities and pick a random one, then display possible things to do within the cities
				srand ( time(NULL) ); //initialize the random seed
	  			RandIndex = rand() % 23; //generates a random number between 0 and 23
  				cout << Cities[RandIndex]; //pick a random city and display that shit
				break;
			case 6:
				cout << "Have a great trip!" << endl;
				return 0;
				break;
		}
	}
}
