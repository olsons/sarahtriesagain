/* Kim Kosman and Sarah Olson
 *
 * SKTravel
 * SKgo class implementation
 */

#include "SKgo.h"
#include "cityClass.h"
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <time.h>
#include <stdlib.h>
#include <iomanip>
using namespace std;

SKgo::SKgo(){
	hasList=false;
	Cities[0] = &cityClass Salzburg("Salzburg", "German","Austria",145871, 5, 9, 7, 5, 9, 47.9085, 13.0550);
        Cities[1] = &cityClass &Vienna("Vienna", "Austria", "German", 1741000, 8, 4, 7, 7, 7, 48.2082, 16.3738);
        Cities[2] = &cityClass Venice("Venice", "Italy", "Italian", 260060, 6,2,6,6,9, 45.4408, 12.3155);
        Cities[3] = &cityClass Tuscany("Tuscany", "Italy", "Italian", 3753000, 7,3,3,2,9, 43.7711, 11.2486);
        Cities[4] = &cityClass StPetersburg("StPetersburg", "Russia", "Russian", 249688, 3, 5, 8, 8, 8, 59.9343, 30.3351);
        Cities[5] = &cityClass Stockholm("Stockholm", "Sweden", "Swedish", 789024, 4,5,7,6,7,59.3293,18.0686);
        Cities[6] = &cityClass Rome("Rome", "Italy", "Italian", 2626000, 4, 5, 9, 10, 7, 41.9028, 12.4964);
        Cities[7] = &cityClass Prague("Prague", "Czech Republic", "Czech", 1247000, 9,8,7,6,8, 50.0755, 14.4378);
        Cities[8] = &cityClass Paris("Paris", "France", "French", 66030000, 2,6,9,10,9,48.8566,2.3522);
        Cities[9] = &cityClass Monaco("Monaco", "France", "French", 37831, 5, 6, 5, 3, 6, 43.7384, 7.4246);
        Cities[10] = &cityClass Madrid("Madrid", "Spain", "Spanish", 3165000, 8,6, 7, 8, 8, 40.4168, 3.7038);
        Cities[11] = &cityClass London("London", "England", "English", 8539000, 3, 6, 8, 7, 7, 51.5074, 0.1278);
        Cities[12] = &cityClass Lisbon("Lisbon", "Portugal", "Portuguese", 530847, 8, 7, 6, 5, 7, 38.7223, 9.1393);
        Cities[13] = &cityClass Istanbul("Istanbul", "Turkey", "Turkish", 14030000, 8, 8, 8, 7, 7, 41.0082, 28.9784);
        Cities[14] = &cityClass Florence("Florence", "Italy", "Italian", 361679, 6, 3, 7, 6, 6, 43.7696, 11.2558);
        Cities[15] = &cityClass Edinburgh("Edinburgh", "United Kingdom", "English", 495360, 8, 4, 7, 7, 6, 55.9533, 3.1883);
        Cities[16] = &cityClass Dublin("Dublin", "Ireland", "English", 527612, 4, 4, 8, 7, 6, 53.3498, 6.2603);
        Cities[17] = &cityClass Budapest("Budapest", "Hungary", "Hungarian", 1732000, 10, 6, 8, 7, 8, 47.4979, 19.0402);
        Cities[18] = &cityClass Brussels("Brussels", "Belgium", "Dutch", 177307, 4, 5, 8, 6, 7, 50.8503, 4.3517);
        Cities[19] = &cityClass Bruges("Bruges", "Belgium", "Flemish", 117377, 7, 2, 7, 5, 8, 51.2093, 3.2247);
        Cities[20] = &cityClass Barcelona("Barcelona", "Spain", "Spanish", 1602000, 4, 7, 6, 7, 9, 41.3851, 2.1734);
        Cities[21] = &cityClass Berlin("Berlin", "Germany", "German", 3502000, 7, 5, 9, 10, 7, 52.52, 13.405);
        Cities[22] = &cityClass Amsterdam("Amsterdam", "Netherlands", "Dutch", 779808, 3, 8, 7, 8, 7, 52.3702, 4.8952);
	Cities[23] = &cityClass Athens("Athens", "Greece", "Greek", 664064, 5, 5, 9, 9, 9, 38.9839, 23.7294);
	Cities[24] = &cityClass Goreme("Goreme", "Turkey", "Turkish", 2000, 7, 8, 3, 2, 9, 38.6448, 34.8313);
	Cities[25] = &cityClass Sochi("Sochi", "Russia", "Russian", 364171, 6, 5, 6, 3, 4, 43.6028, 39.7342);
	Cities[26] = &cityClass Zermatt("Zermatt", "Switzerland", "German", 5775, 3, 9, 6, 3, 10, 46.0207, 7.7491);
	Cities[27] = &cityClass Krakow("Krawkow", "Poland", "Polish", 759131, 8, 3, 7, 7, 6, 50.0647, 19.945);
	Cities[28] = &cityClass Moscow("Moscow", "Russia", "Russian", 11920000, 3, 4, 8, 8, 7, 55.7558, 37.6173);
	Cities[29] = &cityClass Reykjavik("Reykjavik", "Iceland", "Icelandic", 119289, 4, 10, 5, 4, 9, 64.1265, 21.8174);

        // array of cities
        //cityClass * Cities[23] = {&Salzburg, &Vienna, &Venice, &Tuscany, &StPetersburg, &Stockholm, &Rome, &Prague, &Paris, &Monaco, &Madrid, &London, &Lisbon, &Istanbul, &Florence, &Edinburgh, &Dublin, &Budapest, &Brussels, &Bruges, &Barcelona, &Berlin, &Amsterdam};
}

void SKgo::options(){
	int answer;

	while (1){
                answer=0;
		//prompt for option
                while (answer==0){
                        cout << "Welcome to our travel app! What would you like to do today? " << endl;
                        cout << "1) Enter in a bucket list or edit an existing one " << endl;
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
				bucketOption();
			case 2:
				countryOption();
			case 3:
				nearOption();
			case 4:
				rankOption();
			case 5:
				randOption();
			case 6:
				cout << "Have a great trip!" << endl;
                                return 0;
                                break;
		}
	}
}

void SKgo::bucketOption(){
	choice=0;
        if (hasList==false){
        	cout << "Do you want to enter in your bucket list (1) manually or (2) from a text file? ";
                cin >> choice;
                if (choice==1){
                	cout << "What do you want to have in your bucket list?" << endl;
                        cout << "Please enter 'end' when you are finished." << endl;
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
                        break;
                }
	}
        else if (hasList==true){
        	cout << "Do you want to (1)view your bucket list, (2)add items to your bucket list, (3)remove items from your bucket list, or (4)clear your bucket list?" << endl;
                cin >> choice;
                if (choice==1){
                	bucket.print();
                        break;
                }
                else if (choice==2){
                	cout << "What would you like to add to your bucket list?" << endl;
                        cout << "Please enter 'end' when you are finished." << endl;
                        getline(cin, item);
			while (item.compare("end") != 0){
				bucket.addItem(item);
                                getline(cin, item);
                        }
		}
                else if (choice==3){
                        cout << "What items would you like to remove from your bucket list?" << endl;
                        cout << "Please enter 'end' when you are finished." << endl;
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
                        break;
                }
                else{
                	cout << "Your choice was invalid.  Please try again." << endl;
                        break;
                }
	}

        for (int i=0;i<29;i++)
        	cityMatch[i] = Cities[i]->bucketMatch(bucket.getList());

        max=0;
        for (int i=0;i<29;i++){
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
	break;
}

void SKgo::countryOption(){
	cout << "What country are you interested in exploring?" << endl;
        cin >> country;
        for (int i=0;i<country.size();i++)
        	country[i]=tolower(country[i]);
        count=0;
        for (int i=0;i<29;i++){ //print cities in the ocuntry specified
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
}

void SKgo::languageOption(){
	cout << "What language would you like to experience?" << endl;
	cin >> language;
	for (int i=0;i<language.size();i++)
		language[i]=tolower(language[i]);
	count=0;
	for (int i=0;i<30;i++){ //print cities in the ocuntry specified
		if (count == 0 && language.compare(Cities[i]->getLanguage()) == 0){
			cout << "We can help you explore the following cities in " << country << ": " << endl;
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
				break;
}

void SKgo::nearOption(){
	//Enter a location (city or country or both and then computer decides if city or country)
	cout << "Where are you currently located?" << endl;
        cin >> curCity;
        cout << "Within what radius do you want the nearby cities (in kilometers)?";
        cin >> radius;
	//Use the longitude and latitude of all the different cities and to find distance and then compare with the radius
	count=0;
        match=-1;
        for (int i=0;i<29;i++){
        	if (curCity.compare(Cities[i]->getCity())==0)
                	match=i;
	}
        if (match==-1){
        	cout << "Sorry, your city could not be found. Please try again!" << endl;
                break;
	}
        for (int i=0;i<29;i++){
        	if ((Cities[i]->findNearby(*Cities[match]) < radius) && (curCity.compare(Cities[i]->getCity())!=0)){
                cout << Cities[i] -> getCity() << endl;
                count++;
        	}
	}
        if (count == 0)
        	cout << "I'm sorry, there are no nearby cities in our database.  We can help you explore other fun places though, please try again!" << endl;
	break;
}

void SKgo::rankOption(){
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
        for (int i=0;i<29;i++){
        	if (Cities[i]->matchRanks(userRanks) > minChi){ //compute chi square and find most similar city
			match=i;
                        minChi=Cities[i]->matchRanks(userRanks);
		}
	}
        Cities[match]->displayInfo();

	break;
}

void SKgo::randOption(){
	//Shuffle cities and pick a random one, then display possible things to do within the cities
	srand ( time(NULL) ); //initialize the random seed
	RandIndex = rand() % 29; //generates a random number between 0 and 23
	Cities[RandIndex]->displayInfo(); //pick a random city and display that shit

	break;
}
