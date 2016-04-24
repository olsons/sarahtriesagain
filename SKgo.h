/*Kim Kosman and Sarah Olson
 *
 * SKTravel
 * SKgo app (main travel planner)
 */

#ifndef SKGO_H
#define SKGO_H

#include "cityClass.h"
<<<<<<< HEAD
#include <string> 
=======
#include "BucketList.h"
#include <string>
>>>>>>> 2be5aa6e1c0bdddeb4340f2e05bcdbf17bed61c4

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
		BucketList bucket;
		cityClass * Cities[30]; //array of pointers to cities
		bool hasList;

};

#endif
