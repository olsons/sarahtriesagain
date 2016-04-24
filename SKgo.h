/*Kim Kosman and Sarah Olson
 *
 * SKTravel
 * SKgo app (main travel planner)
 */

#ifndef SKGO_H
#define SKGO_H

#include "cityClass.h"
#include <string> 

class SKgo {

	public:
		SKgo(); //constructor
		void options();
		void bucketOption();
		void countryOption();
		void languageOption();
		void nearOption();
		void rankOption();
		void randOption();

	private:
		cityClass * Cities[30]; //array of pointers to cities
		bool hasList;

};

#endif
