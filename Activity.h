/* Kim Kosman and Sarah Olson
 *
 * SKTravel
 * Activity class to hold all activities for each city--inherited by cityClass
 */

#ifndef ACTIVITY_H
#define ACTIVITY_H

#include <vector>
#include <string>
using namespace std;

class Activity{

	public:
		Activity(string); //constructor
		int bucketMatch(vector<string>);
		void printActivities(); //return the top 5 activities

	private:
		vector<string> activities; //list of all the activities within the city

};

#endif
