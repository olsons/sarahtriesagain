/*Kim Kosman and Sarah Olson
 *
 * SKTravel
 * SKGo app (main travel planner)
 */

#ifndef SKGO_H
#define SKGO_H

#include "cityClass.h"
#include <string> 
#include <vector>
#include "BucketList.h"

class SKGo {

	public:
		SKGo(); //constructor
		~SKGo();
		void explore();
		void bucketOption();
		void countryOption();
		void languageOption();
		void nearOption();
		void rankOption();
		void randOption();

	private:
		BucketList bucket;
		vector<cityClass *> Cities; //vector of pointers to cities
		bool hasList;

};

#endif
