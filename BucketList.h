/*Kim Kosman and Sarah Olson
 *
 * SKTravel Tool
 * class to add/remove from a bucket list
 */

#ifndef BUCKETLIST_H
#define BUCKETLIST_H

#include <string>
#include <vector>
using namespace std;

class BucketList {

	public:
		BucketList();
		void addItem(string);
		void removeItem(string);
		vector<string> getList();
		void clear();
		void print();

	private:
		vector<string> list;
		int size;
};

#endif
