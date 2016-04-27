/* Kim Kosman and Sarah Olson
 *
 * SKTravel
 * SKGo class implementation
 */

#include "SKGo.h"
#include "cityClass.h"
#include "BucketList.h"
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <time.h>
#include <stdlib.h>
#include <iomanip>
#include <limits>
using namespace std;

SKGo::SKGo(){
	hasList=false;

	Cities.push_back(new cityClass("Salzburg", "German","Austria",145871, 5, 9, 7, 5, 9, 47.9085, 13.0550));
        Cities.push_back(new cityClass("Vienna", "Austria", "German", 1741000, 8, 4, 7, 7, 7, 48.2082, 16.3738));
        Cities.push_back(new cityClass("Venice", "Italy", "Italian", 260060, 6,2,6,6,9, 45.4408, 12.3155));
        Cities.push_back(new cityClass("Tuscany", "Italy", "Italian", 3753000, 7,3,3,2,9, 43.7711, 11.2486));
        Cities.push_back(new cityClass("StPetersburg", "Russia", "Russian", 249688, 3, 5, 8, 8, 8, 59.9343, 30.3351));
        Cities.push_back(new cityClass("Stockholm", "Sweden", "Swedish", 789024, 4,5,7,6,7,59.3293,18.0686));
        Cities.push_back(new cityClass("Rome", "Italy", "Italian", 2626000, 4, 5, 9, 10, 7, 41.9028, 12.4964));
        Cities.push_back(new cityClass("Prague", "Czech Republic", "Czech", 1247000, 9,8,7,6,8, 50.0755, 14.4378));
        Cities.push_back(new cityClass("Paris", "France", "French", 66030000, 2,6,9,10,9,48.8566,2.3522));
        Cities.push_back(new cityClass("Monaco", "France", "French", 37831, 5, 6, 5, 3, 6, 43.7384, 7.4246));
        Cities.push_back(new cityClass("Madrid", "Spain", "Spanish", 3165000, 8,6, 7, 8, 8, 40.4168, 3.7038));
        Cities.push_back(new cityClass("London", "England", "English", 8539000, 3, 6, 8, 7, 7, 51.5074, 0.1278));
        Cities.push_back(new cityClass("Lisbon", "Portugal", "Portuguese", 530847, 8, 7, 6, 5, 7, 38.7223, 9.1393));
        Cities.push_back(new cityClass("Istanbul", "Turkey", "Turkish", 14030000, 8, 8, 8, 7, 7, 41.0082, 28.9784));
        Cities.push_back(new cityClass("Florence", "Italy", "Italian", 361679, 6, 3, 7, 6, 6, 43.7696, 11.2558));
        Cities.push_back(new cityClass("Edinburgh", "United Kingdom", "English", 495360, 8, 4, 7, 7, 6, 55.9533, 3.1883));
        Cities.push_back(new cityClass("Dublin", "Ireland", "English", 527612, 4, 4, 8, 7, 6, 53.3498, 6.2603));
        Cities.push_back(new cityClass("Budapest", "Hungary", "Hungarian", 1732000, 10, 6, 8, 7, 8, 47.4979, 19.0402));
        Cities.push_back(new cityClass("Brussels", "Belgium", "Dutch", 177307, 4, 5, 8, 6, 7, 50.8503, 4.3517));
        Cities.push_back(new cityClass("Bruges", "Belgium", "Flemish", 117377, 7, 2, 7, 5, 8, 51.2093, 3.2247));
        Cities.push_back(new cityClass("Barcelona", "Spain", "Spanish", 1602000, 4, 7, 6, 7, 9, 41.3851, 2.1734));
        Cities.push_back(new cityClass("Berlin", "Germany", "German", 3502000, 7, 5, 9, 10, 7, 52.52, 13.405));
        Cities.push_back(new cityClass("Amsterdam", "Netherlands", "Dutch", 779808, 3, 8, 7, 8, 7, 52.3702, 4.8952));
	Cities.push_back(new cityClass("Athens", "Greece", "Greek", 664064, 5, 5, 9, 9, 9, 38.9839, 23.7294));
	Cities.push_back(new cityClass("Goreme", "Turkey", "Turkish", 2000, 7, 8, 3, 2, 9, 38.6448, 34.8313));
	Cities.push_back(new cityClass("Sochi", "Russia", "Russian", 364171, 6, 5, 6, 3, 4, 43.6028, 39.7342));
	Cities.push_back(new cityClass("Zermatt", "Switzerland", "German", 5775, 3, 9, 6, 3, 10, 46.0207, 7.7491));
	Cities.push_back(new cityClass("Krakow", "Poland", "Polish", 759131, 8, 3, 7, 7, 6, 50.0647, 19.945));
	Cities.push_back(new cityClass("Moscow", "Russia", "Russian", 11920000, 3, 4, 8, 8, 7, 55.7558, 37.6173));
	Cities.push_back(new cityClass("Reykjavik", "Iceland", "Icelandic", 119289, 4, 10, 5, 4, 9, 64.1265, 21.8174));
	Cities.push_back(new cityClass("Sarajevo", "Bosnia and Herzegovina", "Bosnian", 527049, 8, 8, 5, 6, 7, 43.8564, 18.4131));
}

SKGo::~SKGo(){
	for (int i=0;i<Cities.size();i++)
		delete Cities[i];
}

void SKGo::explore(){
	int answer;

	while (1){
                answer=0;
		//prompt for option
                while (answer==0){
			system("clear");
			cout << "\033[1;35m       Welcome to our travel app\033[0m\n";
			string line;
 			ifstream myfile ("SKGOBanner.txt");
  			if (myfile.is_open())
			{
				while ( getline (myfile,line) ){
					cout << "\033[1;36m" << line << "\033[0m\n";
				}
    				myfile.close();
  			}

			cout << "\033[1;35m     What would you like to do today?\033[0m\n" << endl;
			cout << "1) Enter in a bucket list or edit an existing one " << endl;
			cout << "2) See cities in a particular country " << endl;
			cout << "3) See cities near you " << endl; 
			cout << "4) Customize a trip based on preferences" << endl;
			cout << "5) See cities that speak a certain language" << endl;
			cout << "6) Random adventure" << endl;
			cout << "7) Quit" << endl;
			cin >> answer;
			if (answer < 1 || answer > 7){
				cout << "You did not enter in a correct number. Please try again" << endl;
				answer=0;
			}
                }

                switch(answer){
                        case 1:
				if (!hasList)
					enterBucketOption();
				else if (hasList)
					editBucketOption();
				cout << "Press Enter to return to main menu." << endl;
                                while(cin.get() != '\n'){}
				break;
			case 2:
				countryOption();
				cout << "Press Enter to return to main menu." << endl;
				cin.ignore();
				while(cin.get() != '\n'){}
				break;
			case 3:
				nearOption();
                                cout << "Press Enter to return to main menu." << endl;
				cin.ignore();
                                while(cin.get() != '\n'){}
				break;
			case 4:
				rankOption();
				cout << "Press Enter to return to main menu." << endl;
				cin.ignore();
                                while(cin.get() != '\n'){}
				break;
			case 5:
				languageOption();
				cout << "Press Enter to return to main menu." << endl;
				cin.ignore();
                                while(cin.get() != '\n'){}
				break;
			case 6:
				randOption();
				cout << "Press Enter to return to main menu." << endl;
				cin.ignore();
                                while(cin.get() != '\n'){}
				break;
			case 7:
				cout << "Have a great trip!" << endl;
                                return;
                                break;
		}
	}
}

void SKGo::enterBucketOption(){
	int choice=0;
	string file, item;
	ifstream bucketList;
	int max=0, maxMatch;
	vector<int> cityMatch(Cities.size(),0);

        cout << "Do you want to enter in your bucket list (1) manually or (2) from a text file? ";
        cin >> choice;
        if (choice==1){
               	cout << "What do you want to have in your bucket list?" << endl;
                cout << "Please enter 'end' when you are finished." << endl;
		cin.ignore();
                getline(cin, item);
                while (item.compare("end") != 0){
                       	bucket.addItem(item);
                         getline(cin, item);
                }
                hasList=true;
        }
	else if (choice==2){
               	cin >> file;
                bucketList.open(file.c_str());
                while(! bucketList.eof()){
                       	getline(bucketList, item);
                        for (int i=0;i<item.size();i++)
      	                 	item[i]=tolower(item[i]);
       		                bucket.addItem(item);
                        }
                        hasList=true;
		}
	else{
               	cout << "Your choice was invalid. Please try again." << endl;
                return;
        }

	for (int i=0;i<Cities.size();i++)
                cityMatch[i] = Cities[i]->bucketMatch(bucket.getList());

        for (int i=0;i<Cities.size();i++){
                if (cityMatch[i]>max){
                        max=cityMatch[i];
                        maxMatch=i;
                }
        }

        if (max>0){
                cout << endl << endl << "Your bucket list matches with: " << endl;
                Cities[maxMatch]->displayInfo();
        }
        else if (max==0){
                cout << "We could not find a city to match your bucket list. Please try again!" << endl;
        }
}

void SKGo::editBucketOption(){
	int choice=0;
        string item;
        ifstream bucketList;
        int max=0, maxMatch;
        vector<int> cityMatch(Cities.size(),0);

        cout << "Do you want to (1)view your bucket list, (2)add items to your bucket list, (3)remove items from your bucket list, or (4)clear your bucket list?" << endl;
        cin >> choice;
        if (choice==1){
              	bucket.print();
                return;
        }
        else if (choice==2){
               	cout << "What would you like to add to your bucket list?" << endl;
                cout << "Please enter 'end' when you are finished." << endl;
		cin.ignore();
                getline(cin, item);
		while (item.compare("end") != 0){
			bucket.addItem(item);
                        getline(cin, item);
                }
	}
        else if (choice==3){
        	cout << "What items would you like to remove from your bucket list?" << endl;
                cout << "Please enter 'end' when you are finished." << endl;
		cin.ignore();
                getline(cin, item);
                while (item.compare("end") != 0){
                      	bucket.removeItem(item);
                        getline(cin, item);
                }
	}
        else if (choice==4){
              	bucket.clear();
                cout << "Your bucket list has been erased." << endl;
                hasList=false;
                return;
        }
        else{
               	cout << "Your choice was invalid.  Please try again." << endl;
                return;
        }

        for (int i=0;i<Cities.size();i++)
        	cityMatch[i] = Cities[i]->bucketMatch(bucket.getList());

        for (int i=0;i<Cities.size();i++){
	        if (cityMatch[i]>max){
        	        max=cityMatch[i];
                        maxMatch=i;
                }
	}

        if (max>0){
        	cout << endl << endl << "Your bucket list matches with: " << endl;
                Cities[maxMatch]->displayInfo();
        }
        else if (max==0){
        	cout << "We could not find a city to match your bucket list. Please try again!" << endl;
        }
}

void SKGo::countryOption(){
	string country;
	int count = 0;
	
	cout << "What country are you interested in exploring?" << endl;
        cin >> country;
        for (int i=0;i<country.size();i++)
        	country[i]=tolower(country[i]);

        for (int i=0;i<Cities.size();i++){ //print cities in the ocuntry specified
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
}

void SKGo::languageOption(){
	string language;
	int count =0;
	cout << "What language would you like to experience?" << endl;
	cin >> language;
	for (int i=0;i<language.size();i++)
		language[i]=tolower(language[i]);

	for (int i=0;i<Cities.size();i++){ //print cities in the ocuntry specified
		if (count == 0 && language.compare(Cities[i]->getLanguage()) == 0){
			cout << "We can help you explore the following cities that speak " << language << ": " << endl;
			cout << Cities[i]->getCity() << endl;
			count++;
		}
		else if (language.compare(Cities[i]->getLanguage()) == 0){
			cout << Cities[i]->getCity() << endl;
			count++;
		}
	}	
	if (count == 0)
		cout << "I'm sorry, we don't have information on that language.  We can help you explore other fun places though, please try again!" << endl;
}

void SKGo::nearOption(){
	double radius;
	string curCity;
	int match = -1;
	int count = 0;

	//Enter a location (city or country or both and then computer decides if city or country)
	cout << "Where are you currently located?" << endl;
        cin >> curCity;
        cout << "Within what radius do you want the nearby cities (in kilometers)?";
        cin >> radius;
	//Use the longitude and latitude of all the different cities and to find distance and then compare with the radius
        for (int i=0;i<Cities.size();i++){
        	if (curCity.compare(Cities[i]->getCity())==0)
                	match=i;
	}
        if (match==-1){
        	cout << "Sorry, your city could not be found. Please try again!" << endl;
                return;
	}
        for (int i=0;i<Cities.size();i++){
        	if ((Cities[i]->findNearby(*Cities[match]) < radius) && (curCity.compare(Cities[i]->getCity())!=0)){
                cout << Cities[i] -> getCity() << endl;
                count++;
        	}
	}
        if (count == 0)
        	cout << "I'm sorry, there are no nearby cities in our database.  We can help you explore other fun places though, please try again!" << endl;
}

void SKGo::rankOption(){
	double userRanks[]={0};
	double minChi=1000;
	int match=-1;

	//Chi squared (to match the actual versus wanted)
	//Ask for food, education, cost, scenic, and adventure preferences
	//Ask if they want a smaller city
	//Ask if they have a language preference
	cout << "Please enter your preferences on a 1-10 (least to most) scale!" << endl;
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

        for (int i=0;i<Cities.size();i++){
        	if (Cities[i]->matchRanks(userRanks) > minChi){ //compute chi square and find most similar city
			match=i;
                        minChi=Cities[i]->matchRanks(userRanks);
		}
	}
	if (match!=-1)
        	Cities[match]->displayInfo();
	else
		cout << "No match could be found. Please try again!" << endl;
}

void SKGo::randOption(){
	int RandIndex;

	//Shuffle cities and pick a random one, then display possible things to do within the cities
	srand ( time(NULL) ); //initialize the random seed
	RandIndex = rand() % Cities.size(); //generates a random number between 0 and 30
	Cities[RandIndex]->displayInfo(); //pick a random city and display that shit
}
